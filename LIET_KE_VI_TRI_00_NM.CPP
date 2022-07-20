#include<bits/stdc++.h>
using namespace std;
int n, m;
int k;
int a[10005];
void in(){
    int sum = 0;
    for (int i = 1; i < k; i++){
        sum += a[i];
    }
    if (sum == n && a[0] == 0){
        for (int i = 1; i < k; i++){
            if (a[i] == 0) cout <<"H";
            else cout << "V";
        }
        cout << endl;
    }
    sum = 0;
}
void Try(int i){
    for (int j = 0; j <= 1; j++){
        a[i] = j;
        if (i+1 == k){
            in();
        }
        else {
            Try(i+1);
        }
    }
}
int main(){
    cin >> n >> m;
    k = n+m+1;
    Try(0);
    return 0;
}
// code by Duong