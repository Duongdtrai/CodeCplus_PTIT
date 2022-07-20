#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        vector<ll>a;
        for(ll i = 0 ; i < n; i++){
            int b;
            cin >> b;
            a.push_back(b);
        }
        vector<ll>c;
        for(ll i = 0 ;i < n; i++){
            c.push_back(abs(x-a[i]));
        }
        sort(c.begin(),c.end());
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                if(abs(x-a[j]) == c[i] && a[j] >= 0){
                    cout << a[j] << " ";
                    a[j] = -1;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
//code by Duong