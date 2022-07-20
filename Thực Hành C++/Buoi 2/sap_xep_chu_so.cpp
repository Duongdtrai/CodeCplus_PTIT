#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
void solve(vector<ll>&b, vector<ll>&a,string s){
    for(int i = 0 ; i < s.size(); ++i){
        ll c = (ll)(s[i]-48);
        b[c]++;
        if(b[c] == 1){
            a.push_back(c);
        }
    }
    sort(a.begin(),a.end());
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll y;
        cin >> y;
        scanf("\n");
        string s;
        getline(cin,s);
        vector<ll>b;
        vector<ll>a;
        for(int i = 0 ; i < 20; i++){
            b.push_back(0);
        }
       solve(b,a,s);
        for(int i = 1 ; i < a.size(); i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}