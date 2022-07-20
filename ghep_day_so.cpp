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
        ll a,b;
        cin >> a >> b;
        ll x = a*b;
        ll c[x+5];
        for(int i = 0 ; i < x; i++){
            cin >> c[i];
        }
        sort(c,c+x);
        for(int i = 0 ; i < x; i++){
            cout << c[i] << " ";
        }
        cout << endl;
        
    }
    return 0;
}