#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int handle(string s, int m){
    int count = 0;
            string s1= "abcdefghijklmnopqrstuvwxyz";
            for(int i = 0 ; i < s.size(); i++){
                for(int j = 0; j < s1.size(); j++){
                    if(s[i] == s1[j]){
                        s1.erase(s1.begin()+j);
                        count++;
                        break;
                    }
                }
            }
            if(26-count <= m){
                return 1;
            }
            else return 0;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int m;
        cin >> m;
        cout << handle(s,m) << endl;
    }
    return 0;
}
//code by Duong