#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
// phan tich (a*b)%c = a%c*b%c;
ll result(ll a,ll b, ll c){
    if(b == 0) return 0;
    ll x = result(a,b/2,c); 
    if(b%2 == 0) return ( 2* (x % c)) %c;
    else return (a%c + 2*(x%c)) %c;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a, b,c;
        cin >> a >> b >> c;
        cout << result(a,b,c) << endl;

    }
    return 0;
}
//code by Duong