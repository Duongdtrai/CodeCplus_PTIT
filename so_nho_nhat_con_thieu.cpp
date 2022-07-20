#include<iostream>
#include<cmath>
#include<vector>
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
        vector<ll>a;
        for(ll i = 0 ; i < n - 1; i++){
            ll x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        for(int i = 0; i < a.size()-1; i++){
            if(a[i+1] - a[i] > 1){
                cout << a[i]+1 << endl;
                break;
            }
        }
    }
    return 0;
}