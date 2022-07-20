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
        for(ll i = 0 ;i < n; i++){
            cin >> a[i];
        }
        ll max = a[0];
        for(ll i = 0 ;i < n-1; i++){
            ll x = a[i];
            for(ll j = i + 1; j < n; j++){
                x = x * a[j];
                if(x > max){
                    max = x;
                }
            }
        }
        cout << max << endl;
    }
    return 0;
}
//code by Duong