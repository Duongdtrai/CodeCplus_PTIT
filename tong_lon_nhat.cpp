#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
ll a[100005];
ll b[100005];
ll m, n;
void Input(){
    cin >> m >> n;
    ll x;
    for(ll i = 0; i < m; i++){
        cin >> a[i];
    }
    for(ll i =0 ; i < n; i++){
        cin >> b[i];
    }
}
void Solve(){
    ll sum = 0;
    ll sum1 = 0;
    ll t = 0;
    ll t1 = 0;
    for(ll i = 0; i < m; i++){
        t = t + a[i];
        ll k = 0;
        for(ll j = i+1; j < n; j++){
            k = k + b[j];
        }
        if(t + k > sum){
            sum = t+k;
        }
    }
    for(ll i = 0; i < n; i++){
        t1 = t1 + b[i];
        ll k = 0;
        for(ll j = i+1; j < m; j++){
            k = k + a[j];
        }
        if(t1 + k > sum1){
            sum1 = t1+k;
        }
    }
    if(sum > sum1){
        cout << sum << endl;
    }
    else cout << sum1 << endl;
}
int main(){
    IOS()
    ll test;
    cin >> test;
    while(test--){
        Input();
        Solve();
    }
    return 0;
}
//code by Duong