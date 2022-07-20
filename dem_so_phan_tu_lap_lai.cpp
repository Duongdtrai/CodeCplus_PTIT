#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int b[1000000];
void dem(){
    for(int i = 0 ; i  < 1000000; i++){
        b[i] = 0;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m;
        cin >> m;
        int a[m+5];
        dem();
        for(int i = 0; i < m; i++){
            cin >> a[i];
            b[a[i]]++;
        }
        int sum = 0;
        for(int i = 0; i < m; i++){
            if(b[a[i]] > 1){
                sum = sum + b[a[i]];
                b[a[i]] = 0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
//code by Duong