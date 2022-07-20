#include<iostream>
#include<cmath>
#include<algorithm>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int a[20];
int n;
void input(){
    cin >> n;
    for(int i=0; i<n; i++){
        a[i] = 0;
    }
}
void output(){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void nhiphan(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n-1){
            output();
        }
        else{
            nhiphan(i+1);
        }
    }
}
int main(){
    input();
    nhiphan(0);
    return 0;
}
//code by Duong