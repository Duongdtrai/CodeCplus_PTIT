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
        ll m,n;
        vector< vector<ll>>a;
        vector< vector<ll>>c;
        cin >> m >> n;
        for(int i = 1; i <= m ;i++){
            vector<ll> b;
            vector<ll> d;
            for(int j = 1; j <= n; j++){
                ll x;
                cin >> x;
                b.push_back(x);
                d.push_back(0);

            }
            a.push_back(b);
            c.push_back(d);
        }
        for(int i = 0 ; i < a.size(); i++){
            for(int j = 0; j < a[i].size(); j++){
                if(a[i][j] == 1){
                    for(int k = 0; k < a[i].size(); k++){
                        c[i][k] = 1;
                    }
                }
            }
        }
        for(int j = 0; j < n ;j++){
            for(int i = 0; i < m; i++){
                if(a[i][j] == 1){
                    for(int k = 0; k < m; k++){
                        c[k][j] = 1;
                    }
                }
            }
        }
        for(int i = 0 ; i < m; i++){
            for(int j = 0; j < n; j++){
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}