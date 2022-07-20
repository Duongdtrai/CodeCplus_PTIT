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
        ll a,b,c;
        cin >> a >> b>> c;
        ll x = __gcd(b,c);
        while(x--){
            cout << a;
        }
        cout << endl;
    }
    return 0;
}