#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int n;
vector<int>check;
int x[15];
void Input(){
    cin >> n;
    for(int i = 1; i <= n+1; i++){
        check.push_back(1);
    }
}
void Solve(){
    for(int i = 1; i <= n; i++){
        cout << x[i] << " ";
    }
    cout << endl;
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