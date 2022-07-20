#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1;
        cin >> s1;
        string s2 = s1;
        reverse(s2.begin(),s2.end());
        if(s1 == s2){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}