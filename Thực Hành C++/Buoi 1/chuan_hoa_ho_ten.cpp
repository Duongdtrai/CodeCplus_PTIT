#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
void Solve(string s, vector<string>&check){
     for(int i = 0 ; i< s.size(); i++){
           if('A' <= s[i] && s[i] <= 'Z'){
               s[i] = s[i]+32;
           }
       }
       stringstream p(s);
       string tmp;
       while(p >> tmp){
           check.push_back(tmp);
       }
       for(int i = 0; i < check.size(); i++){
           if(  'a' <= check[i][0] && check[i][0] <= 'z'){
               check[i][0] = check[i][0] - 32;
           }
       }
}
int main(){
    int t;
    cin >> t;
    while(t--){
       int m;
       cin >> m;
       cin.ignore();
       string s;
       getline(cin,s);
       vector<string>check;
       Solve(s,check);
       if(m == 1){
           cout << check[check.size()-1] << " ";
           for(int i = 0 ; i < check.size()-1; i++){
               cout << check[i] << " ";
           }
       }
       else{
           for(int i = 1 ; i < check.size(); i++){
               cout << check[i] << " ";
           }
           cout << check[0] ;
       }
       cout << endl;
    }
    return 0;
}
//code by Duong