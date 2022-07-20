#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll m,n;
        cin >> m >> n;
        vector<ll>a;
        for(int i = 0 ; i < m; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        ll count = 0;
        for(int i = 0; i < m - 1; i++){
            for(int j = i + 1; j < m; j++){
                if(a[i]+a[j] > n){
                    break;
                }
                else if(a[i]+a[j] == n){
                    count++;
                }
                else continue;
            }
        }
        cout << count << endl;
    }
    return 0;
}