#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll x,y;
        cin >> x >> y;
        ll a[x+5];
        ll ok = 0;
        for(ll i = 1; i <= x; i++){
            cin >> a[i];
        }        
        for(ll i = 1; i <= x; i++){
            if(a[i] == y){
                cout << i << endl;
                ok = 1;
                break;
            }
        }
        if( ok == 0) cout << "-1" << endl;
    }
    return 0;
}