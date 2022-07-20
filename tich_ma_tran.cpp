#include<iostream>
using namespace std;
int main(){
        int n,m,p;
        cin >> n >> m >> p;
        int a[2*m+5][2*n+5];
        for(int i = 1; i<= n;i++){
            for(int j = 1; j <= m;j++){
                cin >> a[i][j];
            }
        }
        int b[2*m+5][2*n+5];
        for(int i = 1; i<= m;i++){
            for(int j = 1;j <= p;j++){
                cin >> b[i][j];
            }
        }
        int c[2*m+5][2*n+5];
        for(int i = 1; i<= n;i++ ){
            for(int j = 1; j<= n;j++){
                int sum = 0;
                for (int k = 1; k <= m; k++) {
                    sum = sum + a[i][k] * b[k][j];
                }
            c[i][j] = sum;
            }
        }
        for(int i = 1; i<= n;i++){
            for(int j = 1;j<= n;j++){
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    return 0;
}