#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int snt(int n){
    if(n < 2) return 0;
    for(int i = 2; i<= sqrt(n); i++){
        if(n%i == 0) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
        cin >> n;
       int ok = 0;
       for(int i = 2; i <= n/2 ;i++){
           if(snt(i) == 1 && snt(n-i) == 1){
                cout << i << " " << n-i << endl;
                ok = 1;
                break;
            }
        }
       if(ok == 0) cout << "-1" << endl;
    }
    return 0;
}
//code by Duong