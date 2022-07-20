#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n+5];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        ll max1 = a[0];
        a[1] = max(a[0],a[1]);
        for(ll i = 2; i < n; i++){
            ll x = a[i] + a[i-2];
            a[i] = max(x,a[i-1]);
        }
        cout << a[n-1] << endl;
    }
    return 0;
}
//code by Duong