#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    ll n;
    cin >> n;
    ll sum = 0;
    ll x = 1;
    for(int i = 1; i <= n; i++){
        x = x*i;
        sum = sum + x;
    }
    cout << sum;
    return 0;
}
//code by Duong