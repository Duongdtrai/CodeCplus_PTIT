#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n+5];
        for(ll i = 0;i < n; i++){
            cin >> a[i];
        }
        ll max1 = a[0];
        ll tong = 0;
        for(ll i = 0; i < n; i++){
            tong = max(a[i],tong+a[i]);
            max1 = max(tong, max1);
        }
        cout << max1 << endl;
    }
    return 0;
}
//code by Duong 