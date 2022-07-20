#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
void out(ll a[10000], ll n){
    if(n%2 == 0){
        for(int i = 0; i < n/2;i++){
            cout << a[i] << " " << a[n-i - 1] << " ";
        }
        cout << endl;
    }
    else{
        for(int i = 0; i < n/2;i++){
            cout << a[i] << " " << a[n-i-1] << " ";
        }
        cout << a[n/2] << endl;
    }

}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n+5];
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n,greater<ll>());
        out(a,n);
    }
    return 0;
}