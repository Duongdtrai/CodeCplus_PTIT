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
        ll n,k;
        cin >> n >> k;
        ll a[n+5];
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n,greater<ll>());
        for(int i = 0 ; i < k; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}