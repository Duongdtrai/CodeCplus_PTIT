#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
ll snt(ll a){
    if( a < 2) return 0;
    for(ll i = 2; i <= sqrt(a); i++){
        if(a%i == 0) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
       ll a;
       cin >> a;
       ll count = 0;
       for(ll i = 2; i <= sqrt(a); i++){
           if(snt(i) == 1 ){
                count++;
           }
       }
       cout << count << endl;
    }
    return 0;
}
//code by Duong