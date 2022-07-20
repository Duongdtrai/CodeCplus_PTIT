#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
       int n,m;
       cin >> n >> m;
       int a[n+5];
       for(int i = 0 ; i < n; i++){
           cin >> a[i];
       }
       sort(a,a+n);
       cout << a[m-1] << endl;
    }
    return 0;
}
//code by Duong