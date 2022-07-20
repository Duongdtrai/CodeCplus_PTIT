#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;


int Solve(vector<char>res){
    for(int i = 0; i < res.size() - 1; i++){
        int x = res[i] - 48;
        int y = res[i+1] - 48;
        if( x - y == 1 || y - x == 1){
            continue;
        }
        else return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        vector<char>res;
        for(int i = 0; i<  s.size(); i++){
            res.push_back(s[i]);
        }
        int result = Solve(res);
        if(result == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
//code by Duong