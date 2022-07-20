#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[100000];
        a[0] = 0;
        a[1] = 1;
        if(n == a[0] || n == a[1]){
            cout << "YES" << endl;
        }
        else{
            for(int i = 2; i < 100000; i++){
                a[i] = a[i-1] + a[i-2];
                if(a[i] > n){
                    cout << "NO" << endl;
                    break;
                }
                else if(a[i] == n){
                    cout << "YES" << endl;
                    break;
                }
                else continue;
            }
        }

    }
    return 0;
}