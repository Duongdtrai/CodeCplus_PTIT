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
        ll b[n+5];
        for(ll i =0 ; i < n; i++){
            cin >> a[i];
        }
        b[0] = a[0]*a[1];
        b[n-1] = a[n-1] * a[n-2];
        for(ll i = 1; i < n-1; i++){
            b[i] = a[i-1] * a[i+1];
        }
        for(int i = 0 ; i < n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
//code by Duong