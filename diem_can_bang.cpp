#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int b[1000000];

int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       int a[n+5];
       int sum = 0;
       for(int i = 0 ; i < n; i++){
           cin >> a[i];
           sum = sum + a[i];
       }
       int ok = 0;
       if(n == 1) cout << "1"<< endl;
       else{
           int sum1 = 0;
           for(int i = 1 ; i < n-1 ;i++){
               sum1 = sum1 + a[i-1];
               if(sum - a[i] - sum1 == sum1){
                   cout << i+1 << endl;
                   ok = 1;
                   break;
               }
           }
           if(ok == 0){
               cout << "-1" << endl;
           }
       }
    }
    return 0;
}
//code by Duong