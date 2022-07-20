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
        ll n,x;
        cin >> n >> x;
        ll a[n+5];
        for(ll i = 0 ; i < n; i++){
            cin >> a[i];
        }
        ll c[n+5];
        for(ll i = 0 ;i < n; i++){
            c[i] = abs(x-a[i]);
        }
        sort(c,c+n);
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                if(abs(x-a[j]) == c[i] && a[j] >= 0){
                    cout << a[j] << " ";
                    a[j] = -1;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
//code by Duong