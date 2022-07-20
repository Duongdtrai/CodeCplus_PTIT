#include<iostream>
#include<cmath>
#include<vector>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        vector<ll>a;
        for(ll i = 0 ; i < n; i++){
            ll z;
            cin >> z;
            a.push_back(z);
        }
        bool ok = false;
        for(int i = 0 ; i < a.size(); i++){
            if(a[i] == x){
                cout << "1" << endl;
                ok = true;
                break;
            }
        }
        if(ok == false){
            cout << "-1" << endl;
        }
    }
    return 0;
}