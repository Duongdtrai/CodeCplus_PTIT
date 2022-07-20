#include<iostream>
#include<cmath>
#include<string>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
string N_Phan(string s){
    for(int i = s.size() - 1 ; i >= 0; i--){
        if(s[i] == '0'){
            s[i] = '1';
            return s;
        }
        else if(s[i] == '1'){
            s[i] = '0';
        }
    }
    return "";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s = "";
        for(int i = 0; i < n; i++){
            s = s + '0';
        }        
        for(int i = 0; i < pow(2,n); i++){
            cout << s << " ";
            s = N_Phan(s);
        }
        cout << endl;
    }
    return 0;
}