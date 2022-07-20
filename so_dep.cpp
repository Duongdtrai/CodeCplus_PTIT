#include<iostream>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
bool stn(string s){
    string red = s;
    reverse(s.begin(),s.end());
    if(red == s) return true;
    else return false;
}
bool Even_odd(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9'){
            return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        if(stn(s) == true && Even_odd(s) == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
//code by Duong