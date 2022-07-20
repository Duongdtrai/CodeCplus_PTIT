#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
ll snt(ll a){
    if(a<2) return 0;
    for(int i = 2; i <= sqrt(a); i++){
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        ll count = 0;
        for(ll i = sqrt(a); i <= sqrt(b); i++){
            if(snt(i) == 1) count++;
        }
        cout << count << endl;
    }
    return 0;
}
//code by Duong