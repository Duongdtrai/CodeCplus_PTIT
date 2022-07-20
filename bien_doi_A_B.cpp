#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long n=s.size();
    long A=0,B=0;
    for(long i=0;i<n;i++)
    {
        if(s[i]=='A') B=1+(A<B?A:B);
        else   A=1+(A<B?A:B);
    }
    cout<<A;
}