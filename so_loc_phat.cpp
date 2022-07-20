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
        int ok = 1;
        int count1 = 0;
        int count2 = 0;
        int count3 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1' ||s[i] == '2' ||s[i] == '3' ||s[i] == '4' ||s[i] == '5' || s[i] == '7' ||s[i] == '9'){
                ok = 0;
            }
            else if(s[i] == '0'){
                count1++;
            }
            else if(s[i] == '6'){
                count2++;
            }
            else if(s[i] == '8'){
                count3++;
            }
        }
        if(ok == 1){
                cout << "YES" << endl;
        } 
        else cout << "NO" << endl;
    }
    return 0;
}
//code by Duong