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
        ll a[n+5][n+5];
        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= n; j++){
                cin >> a[i][j];
            }  
        }
        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= n; j++){
                if(i == 1 || i == n){
                    cout << a[i][j] << " ";
                }
                else if(j == 1 || j == n){
                    cout << a[i][j] << " ";
                }
                else cout << "  ";
            }  
            cout << endl;
        }
    }
    return 0;
}
//code by Duong