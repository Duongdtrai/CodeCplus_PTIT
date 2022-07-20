#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>check;
int res[25];
int x[25];
int ok = 0;
int in = 4;
void input(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> res[i];
    }
    for(int i = 1; i <= n+1; i++){
        check.push_back(1);
    }
}
void solve(){
    if(ok == 0){
        int dem = 0;
        for(int i = 1; i <= n; i++){
            if(res[i] == x[i]){
                dem++;
            }
            else break;
        }
        if(dem == n){
            ok = 1;
        }
    }
    else if(ok == 1 && in > 0){
        for(int i = 1; i <= n; i++){
            cout << x[i] << " ";
        }
        in--;
        cout << endl;
    }
}
void hoanvi(int i){
    for(int j = 1; j <= n; j++){
        if(check[j] == 1){
            check[j]=0;
            x[i] = j;
            if(i==n){
                solve();
            }
            else{
                hoanvi(i+1);
            }
            check[j] = 1;
        }
    }
}
int main(){
    input();
    hoanvi(1);
}