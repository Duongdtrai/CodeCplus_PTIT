#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n+5];
        for(ll i = 0 ; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        ll count = 0;
        ll b[n+5];
        ll x = 0;
        for(int i = 0; i < n - 1; i++){
            if(a[i] < a[i+1]){
                b[x++] = a[i];
                count++;
                if(count == 2){
                    break;
                }
            }
        }
        if(count < 2) cout << "-1" << endl;
        else cout << b[0] << " " << b[1] << endl;
    }
    return 0;
}