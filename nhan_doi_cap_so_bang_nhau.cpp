#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

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
        for(int i = 0; i < n-1; i++){
            if(a[i] == a[i+1]){
                a[i] = a[i]*2;
                a[i+1] = 0;
            }
        }
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
    return 0;
}
//code by Duong