#include<iostream>
#include<cmath>
#include<algorithm>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int n;
int A[10]; 
int X[10]; 
int Xuoi[20];
int Nguoc[20];
void Input(){
    cin >> n;
    for(int i=1; i<=n; i++){
        A[i] = 1;
    }
    for(int i=1; i <= 2*n; i++){
        Xuoi[i] = 1;
        Nguoc[i] = 1;
    }
}
void Out(){
    for(int i = 1; i <= n; i++){
        cout << X[i] <<" ";
    }
    cout << endl;
}
void Queen(int i){
    for(int j = 1; j <= n; j++){
        if(A[j] == 1 && Xuoi[i-j+n] == 1 && Nguoc[i+j-1] == 1){
            X[i] = j;
            A[j] = 0;
            Xuoi[i-j+n] = 0;
            Nguoc[i+j-1] = 0;
            if(i == n){
                Out();
            }
            else {
                Queen(i+1);
            }
            A[j] = 1;
            Xuoi[i-j+n] = 1;
            Nguoc[i+j-1] = 1;
        }
    }
}
int main(){
    Input();
    Queen(1);
    return 0;
}
//code by Duong