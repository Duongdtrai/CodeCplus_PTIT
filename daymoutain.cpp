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
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        ll k,l;
        cin >> k >> l;
        ll j;
        ll ok1 = 0;
        ll count = 0;
        for(ll i = k; i < l; i++){
            if(a[i] == a[i+1]){
                count++;
            }
        }
        if(count == l-k){
            cout  << "Yes" << endl;
        }
        else{
            int ok1 = 0;
            int ok2 = 0;
            int j;
            for(ll i = k; i < l; i++){
                if(a[i] <=  a[i+1]){
                    ok1 = 1;
                }
                else{
                    j = i;   // 5 6 5
                    break;
                }
            }
            int ok3 = 1;
            for(int i = j; i < l; i++){
                if(a[i] >= a[i+1]){
                    ok3 = 1;
                }
                else{
                    ok3 = 0;
                    break;
                }
            }
        if(ok1 == 1 && ok3 == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    }
    return 0;
}
//code by Duong