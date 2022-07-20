#include<string>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        if(s[0] >= 'a' && s[0] <= 'z'){
            cout << (char)(s[0]-32) << endl;
        }
        else cout << (char)(s[0]+32) << endl;
    }
    return 0;
}