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
        for(int i = 0; i < s.size(); i++){
            if('a' <= s[i] && s[i] <= 'z'){
                s[i] = s[i] - 32;
            }
        }
        string thuan = "";
        for(int i = 0 ;i < s.size();i++){
            if(s[i] == 'A' || s[i] == 'B' || s[i] =='C'){
                thuan = thuan + '2';
            }
            else if(s[i] == 'D' || s[i] == 'E' || s[i] =='F'){
                thuan = thuan + '3';
            }
            else if(s[i] == 'G' || s[i] == 'H' || s[i] =='I'){
                thuan = thuan + '4';
            }
            else if(s[i] == 'J' || s[i] == 'K' || s[i] =='L'){
                thuan = thuan + '5';
            }
            else if(s[i] == 'M' || s[i] == 'N' || s[i] =='O'){
                thuan = thuan + '6';
            }
            else if(s[i] == 'P' || s[i] == 'Q' || s[i] =='R' || s[i] =='S'){
                thuan = thuan + '7';
            }
            else if(s[i] == 'T' || s[i] == 'U' || s[i] =='V'){
                thuan = thuan + '8';
            }
            else{
                thuan = thuan + '9';
            }
        }
        string nghich = thuan;
        reverse(nghich.begin(),nghich.end());
        if(nghich == thuan){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
//code by Duong