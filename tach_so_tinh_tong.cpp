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
       string c="";
       int sum = 0;
       for(int i = 0 ; i < s.size(); i++){
           if( '0' <= s[i] && s[i] <= '9'){
               int a = (int)(s[i]-48);
               sum = sum+a;
           }
           else{
               c = c + s[i];
           }
       }
       sort(c.begin(),c.end());
       for(int i = 0 ; i < c.size(); i++){
           cout << c[i];
       }
       cout << sum << endl;
    }
    return 0;
}
//code by Duong