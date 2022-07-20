#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string a;
        getline(cin,a);
        long long sum=0,s1=0,sum1=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>='0' && a[i]<='9')
            {
                sum=sum*10+a[i]-48;
            } 
            else
            {
                sum1=sum+sum1;
                sum=0;
            }
        }
        sum1=sum1+sum;
        cout<<sum1<<endl;
    }
}