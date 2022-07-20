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
        int c[n+5];
        int b[n+5];
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        if(n%2 == 0){
            int x = 0;
            int y = 0;
            for(int i = 0 ; i < n/2; i++){
                b[x++] = a[i];
            }
            for(int i = n/2 ; i < n; i++){
                c[y++] = a[i];
            }
            x = 0;
            y = 0;
            for(int i = 0 ; i < n; i++){
                if(i%2 == 0){
                    cout << b[x++] << " ";
                }
                else cout << c[y++] << " ";
            }
            cout << endl;
        }
        else{
            int x = 0;
            int y = 0;
            for(int i = 0 ; i <= n/2; i++){
                b[x++] = a[i];
            }
            for(int i = n/2 + 1 ; i < n; i++){
                c[y++] = a[i];
            }
            x = 0;
            y = 0;
            for(int i = 0 ; i < n; i++){
                if(i%2 == 0){
                    cout << b[x++] << " ";
                }
                else cout << c[y++] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
//code by Duong