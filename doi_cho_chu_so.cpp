#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int x;
        int ktra;
        for(int i = s.size()-1; i>= 1; i--){
            if(s[i] < s[i-1]){
                x = i-1;
                ktra = s[i-1]-48;
                break;
            }
        }
        // 100
        int max = -1;
        int end;
        int ok = 0;
        for(int i = x+1; i < s.size(); i++){
            int y = s[i]-48;
            if(max < y && y < ktra){
                max = y;
                end = i;
                ok = 1;
            }
        }
        // 100
        swap(s[x],s[end]);
        if(ok == 1  ){
            cout << s << endl;
        }
        else cout << "-1" << endl;
    }
    return 0;
}
//code by Duong