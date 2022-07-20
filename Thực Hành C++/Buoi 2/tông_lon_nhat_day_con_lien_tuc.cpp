#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
void solve(ll &max1,vector<ll>a){
    ll tong = 0;
    for(ll i = 0; i < a.size(); i++){
        tong = max(a[i],tong+a[i]);
        max1 = max(tong, max1);
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>a;
        for(ll i = 0;i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        ll max1 = a[0];
        solve(max1,a);
        cout << max1 << endl;
    }
    return 0;
}
//code by Duong 