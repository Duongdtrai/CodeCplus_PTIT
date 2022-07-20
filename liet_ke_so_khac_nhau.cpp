#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    // int t;
    // cin >> t;
    // while(t--){
       int n;
        cin >> n;
        int b[10000];
        for(int i = 0 ; i < 10000; i++){
            b[i] = 0;
        }
        int a[105];
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
            b[a[i]]++;
        }
        int c[105];
        int x = 0;
        for(int i = 0 ; i < n; i++ ){
            if(b[a[i]] > 0){
                c[x++] = a[i];
                b[a[i]] = 0;
            }
        }
        sort(c,c+x);
        for(int i = 0; i < x; i++){
            cout << c[i] << " ";
        }
    // }
    return 0;
}
//code by Duong