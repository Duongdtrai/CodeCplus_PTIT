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
        ll m;
        cin >> m;
        ll a[m+5][m+5];
        for(ll i = 1; i <= m; i++){
            for(ll j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        for(ll i = 1; i <= m; i++){
            if(i%2 == 1){
                for(ll j = 1; j <= m; j++){
                    cout << a[i][j] << " ";
                }
            }
            else{
                for(ll j = m; j >= 1; j--){
                    cout << a[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
//code by Duong