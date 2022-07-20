#include<iostream>
#include<cmath>
#include<algorithm>
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
        int sum = s.size();
        for(int i = 0 ; i < s.size()-1; i++){
            for(int j = i+1; j < s.size(); j++){
                if(s[i] == s[j]){
                    sum++;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
//code by Duong