#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int a[30];
int b[30][30];
int m;
int n;
int maxfind = -1;
int dem = 0;
struct danhdau{
    vector<int>hire;
    int somay;
};
struct danhdau ds[50];

void input(){
    cin >> m >> n;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> b[i][j];
        }
    }
    for(int i = 1 ;i <= m; i++ ){
        a[i] = 0;
    }
}
void output(){
    set<int>customers;
    int size1 = 0;
    int ktrasize = 0;
    for(int i= 1 ; i <= m; i++){
        if(a[i] == 1){
            for(int j = 1; j <= n; j++){
                if(b[i][j] == 1){
                    size1++;
                    customers.insert(j);
                }
                
            }
        }
    }
    for(auto i:customers){
        ktrasize++;
    }
    if(ktrasize == size1 && maxfind < size1){
        maxfind = size1;
        ds[dem].somay = size1;
        for(int k = 1; k <= m; k++){
            ds[dem].hire.push_back(a[k]);
        }
        dem++;
    }
}
void nhiphan(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == m){
            output();
        }
        else{
            nhiphan(i+1);
        }
    }
}
int main(){
    input();
    nhiphan(1);
    for(int i = 0 ; i < dem; i++){
        if(maxfind == ds[i].somay){
            for(int j = 0; j < ds[i].hire.size(); j++){
                cout << ds[i].hire[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
//code by Duong