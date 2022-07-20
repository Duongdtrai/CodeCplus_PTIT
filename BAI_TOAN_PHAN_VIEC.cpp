#include<bits/stdc++.h>

#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int n;
vector<int>check;
int x[10];
int a[30][30];
int MIN = 1000000;
void Input(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            MIN = min(MIN,a[i][j]);
        }
    }
    for(int i = 1; i <= n+1; i++){
        check.push_back(1);
    }
}
void Solve(){
    int size1 = 0;
    for(int i = 1; i <= n; i++){
        if(a[i][x[i]] == MIN){
            size1++;
        }
        // cout << x[i] << " ";
    }
    // cout << endl;
    if(size1 == n){
        for(int i = 1; i <= n; i++){
            cout << "Man" << i << "->" << "Job" << x[i] <<"||";
        }
        cout << endl;
    }
}
void QuayLuiHoanVi(int i){
    for(int j = 1; j <= n; j++){
        if(check[j] == 1){
            check[j] = 0;
            x[i] = j;
            if(i == n){
                Solve();
            }
            else{
                QuayLuiHoanVi(i+1);
            }
            check[j] = 1;
        }
    }
}
int main(){
    Input();
    QuayLuiHoanVi(1);
    return 0;
}
//code by Duong