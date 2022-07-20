#include <iostream>
#include <cmath>
#include <algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;

ll cmp(ll x, ll y){
	ll a = 10;
    ll b = 10; 
	while(x/a > 0){
        a = a*10;
    }
    while(y/b > 0){
        b = b*10;
    }
    return x*b + y > y*a + x;
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n+5];
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n,cmp);
        for(int i = 0; i < n; i++){
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}