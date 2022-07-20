#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string res;
        cin >> res;
        for(int i = 0; i < res.size()-2; i++){
            if(res[i] == '0'&& res[i+1] == '8'&& res[i+2] == '4'){
                res[i] = 'a';
                res[i+1] = 'a';
                res[i+2] = 'a';
            }
            if(i == res.size()-3) break;
        }
        for(int i = 0; i < res.size(); i++){
            if(res[i] != 'a') cout << res[i];
        }
        cout << endl;
    }
    return 0;
}
//code by Duong