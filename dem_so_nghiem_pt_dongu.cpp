#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--)
    {
        long long b,p,dem=1;
        cin>>b>>p;
        for(long long i=2;i<=p+1;i++){
            if(i*i%p==1){
                for(long long j=i;j<=b;j=j+p) dem++;
            }

        }
        cout<<dem<<endl;
    }
}