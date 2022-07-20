#include<iostream>
#include<vector>
using namespace std;
void xu_li(vector<vector<int> >&a,vector<vector<int> >&b,vector<vector<int> >&c,int m, int n){
    for(int i = 1; i<= m;i++){
            vector<int>gt;
            for(int j = 1; j <= n;j++){
                int x;
                cin >> x;
                gt.push_back(x);
            }
            a.push_back(gt);
        }
        for(int i = 0; i< n;i++){
            vector<int>gt;
            for(int j = 0;j < m;j++){
                int x = a[j][i];
                gt.push_back(x);
            }
            b.push_back(gt);
        }
        for(int i = 0; i< m;i++ ){
            vector<int>gt;
            for(int j = 0; j< m;j++){
                int sum = 0;
                for (int k = 0; k < n; k++) {
                    sum = sum + a[i][k] * b[k][j];
                }
                gt.push_back(sum);
            }
            c.push_back(gt);
        }
}
int main(){
    int t;
    cin >> t;
    for(int h = 1;h <= t;h++){
        int m,n;
        cin >> m >> n;
        vector<vector<int> >a;
        vector<vector<int> >b;
        vector<vector<int> >c;
        xu_li(a,b,c,m,n);
        cout << "Test " << h <<":" << endl;
        for(int i = 0; i< m;i++){
            for(int j = 0;j< m;j++){
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}