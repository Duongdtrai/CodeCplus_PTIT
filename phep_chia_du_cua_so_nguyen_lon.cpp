#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        ll m;
        cin >> m;
        ll sum = 0;
        for(int j = 0; j < s.size(); j++){
            ll a = s[j]-48;
            sum = sum*10 + a;
            sum = sum % m;
        }
        cout << sum << endl;
    }
    return 0;
}
//code by Duong