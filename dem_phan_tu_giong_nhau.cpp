#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5][n+5];
        int b[100002];
        for(int i = 0; i < 100002; i++){
            b[i] = 1;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
                if(b[a[i][j]] == i){
                    b[a[i][j]]++;
                }
            }
        }
        int dem = 0;
        for(int i = 0; i < 100002; i++){
            if(b[i] == n+1){
                dem++;
            }
        }
        cout << dem << endl;
        
    }
    return 0;
}
//code by Duong