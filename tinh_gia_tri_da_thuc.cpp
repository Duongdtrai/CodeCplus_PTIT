#include<iostream>
#include<cmath>
#include<algorithm>
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
int main(){
    int t;
    cin >> t;
    while(t--){
            ll n,x;
            cin >> n >> x;
            ll a[n+5];
            for(ll i = n-1 ; i >= 0; i--){
                cin >> a[i];
            }
            ll sum = 0;
            for(ll i = n-1; i >= 0 ;i--){
                sum = (sum + a[i] * power(x,i))%mod;
            }
            cout << sum << endl;
    }
    return 0;
}
//code by Duong