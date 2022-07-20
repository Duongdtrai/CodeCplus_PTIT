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
        ll n;
        cin >> n;
        ll p;
        cin >> p;
        ll count1 = 0;
        // for(ll i = p; i <= n; i++){
        //     ll a = i;
        //     cout << "gia tri i: ";
        //     while(a%p == 0){
        //         count1++;
        //         cout << a << " ";
        //         a = a/p;
        //     }
        //     if(i%p) cout << endl;
        // }
        for(ll i = 1; i <= n; i++){
            if(i%p == 0){
                count1++;
                ll a = i;
                while(a > 0){
                    a = a/p;
                    if(a%p != 0){
                        break;
                    }
                    else if(a%p ==0) count1++;
                }
            }
        }
        cout << count1 << endl;
    }
    return 0;
}
//code by Duong