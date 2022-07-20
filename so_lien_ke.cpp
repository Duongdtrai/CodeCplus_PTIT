#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int ok = 1;
        for(int i = 0; i < s.size() - 1; i++){
            int x = s[i] - 48;
            int y = s[i+1] - 48;
            if( x - y == 1 || y - x == 1){
                continue;
            }
            else{
                ok = 0;
                cout << "NO" << endl;
                break;
            }
        }
        if(ok == 1) cout << "YES" << endl;
    }
    return 0;
}
//code by Duong