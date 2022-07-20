#include<iostream>
#include<cmath>
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
        a[0] = 0;
        a[1] = 1;
        for(int i = 2 ; i <= n; i++){
            a[i] = a[i-1] + a[i-2];
        }
        cout << a[n] << endl;
    }
    return 0;
}