#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    ll n;
    cin >> n;
    for(ll i =2; i <= sqrt(n); i++){
        ll count = 0;
        int ok = 0;
        while(n%i == 0){
            n = n/i;
            ok = 1;
            count++;
        }
        if(ok == 1){
            cout << i << " " << count << endl;
        }
    }
    if( n > 1) cout << n << " 1" << endl;
    return 0;
}
//code by Duong