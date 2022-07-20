#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
ll power(ll a, ll b){
    if(b == 0) return 1;
    if(b == 1) return a;
    ll x = power(a,b/2);
    if(b%2 == 1) return ((((x%mod)*x)%mod)*a)%mod;
    return ((x%mod)*x)%mod; 
}
ll Handle(vector<ll>&a, ll n, ll x){
    reverse(a.begin(),a.end());
        ll sum = 0;
        for(ll i = a.size()-1; i >= 0 ;i--){
            sum = (sum + a[i] * power(x,i))%mod;
        }
        return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
            ll n,x;
            cin >> n >> x;
            vector<ll>a;
            for(ll i = n-1 ; i >= 0; i--){
                int in;
                cin >> in;
                a.push_back(in);
            }
            cout << Handle(a,n,x) << endl;
    }
    return 0;
}
//code by Duong