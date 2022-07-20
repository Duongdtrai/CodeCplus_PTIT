#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int main(){
    // int t;
    // cin >> t;
    // while(t--){
        string s;
        cin >> s;
        for(int i = 0 ; i < s.size(); i++){
            if('A' <= s[i] && s[i] <= 'Z'){
                s[i] = s[i] + 32;
            }
        }
        string result="";
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i]== 'i' || s[i] == 'o' || s[i] == 'u' || s[i] =='y'){
                continue;
            }
            else{
                result = result+s[i];
            }
        }
        for(int i = 0 ; i < result.size(); i++){
            cout <<"." << result[i] ;
        }
    // }
    return 0;
}
//code by Duong