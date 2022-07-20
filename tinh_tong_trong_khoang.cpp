#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll m,n;
        cin >> m >> n;
        ll a[m+5];
        for(int i = 1 ; i <= m; i++){
            cin >> a[i];
        }
        while(n--){
            ll x,y;
            cin >> x >> y;
            ll sum = 0;
            for(int i = x; i <= y; i++ ){
                sum = sum + a[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}