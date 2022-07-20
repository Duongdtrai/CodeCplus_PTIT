#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
void Solve(vector<vector<ll> > a, ll m){
    for(ll i = 0; i < m; i++){
                if(i%2 == 0){
                    for(ll j = 0; j < m; j++){
                        cout << a[i][j] << " ";
                    }
                }
                else{
                    for(ll j = m-1; j >= 0; j--){
                        cout << a[i][j] << " ";
                    }
                }
            }
            cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll m;
        cin >> m;
        vector<vector<ll> > a;
        for(ll i = 1; i <= m; i++){
            vector<ll>gt;
            for(ll j = 1; j <= m; j++){
                int x;
                cin >> x;
                gt.push_back(x);
            }
            a.push_back(gt);
        }
        Solve(a,m);
    }
    return 0;
}
//code by Duong