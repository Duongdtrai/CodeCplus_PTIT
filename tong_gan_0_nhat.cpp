#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
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
        ll xuli = 1000000000;
        ll min;
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i  < n; i++ ){
            for(int j = 0 ; j < n; j++){
                ll x = a[i] + a[j];
                if(abs(x) < xuli && i!=j){
                    xuli = abs(x);
                    min = a[i] + a[j];
                }
            }

        }
        cout << min << endl;
    }
    return 0;
}