#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        ll *a = new ll[n+5];
        for(ll i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){
            if(a[i] == x){
                cout << i << endl;
            }
        }
    }
    return 0;
}