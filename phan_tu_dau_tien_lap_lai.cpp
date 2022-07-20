#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
ll b[1000001];
ll d[1000001];
void xuli(){
    for(int i = 0 ; i < 1000001; i++){
        b[i] = 0;
    }   
    for(int i = 0 ; i < 1000001; i++){
        d[i] = 0;
    }    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n+5];
        xuli();
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
            b[a[i]]++;
            d[a[i]]++;
        }
        int ok = 0;
        ll c[n+5];
        int x = 0;
        for(int i = 0 ; i < n; i++){
            if(b[a[i]] > 1){
                ok = 1;
                c[x++] = a[i];
            }
        }
        if(ok == 0) cout << "-1" << endl;
        else{
            for(int i = 0 ; i < x; i++){
                b[c[i]]--;
                if(b[c[i]] == d[c[i]] - 2){
                    cout << c[i] << endl;
                    break;
                }
            }
        }
    }
    return 0;
}