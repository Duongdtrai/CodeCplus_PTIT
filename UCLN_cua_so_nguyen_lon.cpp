#include<iostream>
#include<cmath>
#include<algorithm>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const ll mod = 1e9+7;
ll a;
string b;
void Input(){
    cin >> a;
    cin >> b;
}
void Solve(){
    ll num_first = 0;
    for(int i = 0; i < b.size();i++){
        num_first = (num_first*10 + b[i]-48)%a;
    }
    ll ucln = __gcd(a,num_first);
    cout << ucln << endl;
}
int main(){
    IOS()
    int test;
    cin >> test;
    while(test--){
        Input();
        Solve();
    }
    return 0;
}
//code by Duong