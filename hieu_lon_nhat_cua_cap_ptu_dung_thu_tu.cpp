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
        int n;
        cin >> n;
        int a[n+5];
        int b[n+5];
        int x = 0;
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        int max = -1;
        for(int i = 1; i < n; i++){
            for(int j = 0 ; j < i; j++){
                if(a[i] > a[j] && a[i] - a[j] > max){
                    max = a[i]-a[j];
                }
            }
        }
        cout << max << endl;
    }
    return 0;
}
//code by Duong