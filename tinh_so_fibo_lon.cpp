#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
ll fino(ll a, ll b){
    return a%mod + b%mod;
}
int main(){
    int t;
    cin >> t;
    while(t--){
       ll n;
       cin >> n;
       ll a[1005];
       a[0] = 0;
       a[1] = 1;
       for(ll i = 2; i <= 1000; i++){
           a[i] = fino(a[i-1],a[i-2]);
       }
       cout << a[n]%mod << endl;
    }
    return 0;
}
//code by Duong