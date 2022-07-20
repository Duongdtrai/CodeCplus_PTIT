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
        ll x;
        cin >> x;
        ll a[x+5];
        for(int i = 0 ; i < x; i++){
            cin >> a[i];
        }
        sort(a,a+x);
        ll sum = 0;
        for(int i = 0 ; i < x-1; i++){
            ll n = a[i+1] - a[i];
            if(n >= 2){
                sum = sum + n-1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}