#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
        int n;
        cin >> n;
        int a[n+5][n+5];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n ;j++){
                cin >> a[i][j];
            }
        }
        int m;
        cin >> m;
        int b[n+5][n+5];
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= m ;j++){
                cin >> b[i][j];
            }
        }
        int x = 1;
        int y = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(y == m+1){
                    y = 1;
                }
                a[i][j] = a[i][j] * b[x][y++];
            }
            x++;
            if(x == m+1){
                x = 1;
            }
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    return 0;
}
//code by Duong