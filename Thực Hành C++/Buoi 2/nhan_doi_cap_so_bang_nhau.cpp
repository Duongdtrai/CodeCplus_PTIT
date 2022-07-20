#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
void handle(int n, int &x,vector<int> &a){
    for(int i = 0; i < n-1; i++){
        if(a[i] == a[i+1]){
            a[i] = a[i]*2;
            a[i+1] = 0;
        }
    }  
}
void out(int n, int &x,vector<int> a){
    for(int i = 0 ;i < n; i++){
        if(a[i]!= 0){
            cout << a[i] << " ";
            x++;
        }
    }
    for(int i = x; i < n; i++){
        cout << "0 ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a;
        int x = 0;
        for(int i = 0 ; i < n; i++){
            int b;
            cin >> b;
            a.push_back(b);
        }
        handle(n,x,a);
        out(n,x,a);
    }
    return 0;
}
//code by Duong