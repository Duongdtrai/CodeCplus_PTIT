#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll y;
        cin >> y;
        cin.ignore();
        string s;
        getline(cin,s);
        ll b[20];
        for(int i = 0 ; i < 20; i++){
            b[i] = 0;
        }
        ll x = 0;
        ll a[s.size()];
        for(int i = 0 ; i < s.size(); ++i){
            ll c = (ll)(s[i]-48);
            b[c]++;
            if(b[c] == 1){
                a[x++] = c;
            }
        }
        sort(a,a+x);
        for(int i = 0 ; i < x; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}