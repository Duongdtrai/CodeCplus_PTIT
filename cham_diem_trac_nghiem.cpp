#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    string one = "ABBADCCABDCCABD";
    string two = "ACCABCDDBBCDDBB";
    while(t--){
        int m;
        cin >> m;
        cin.ignore();
        string s;
        getline(cin,s);
        vector<char>res;
        for(int i = 0; i < s.size(); i++){
            if(s[i]!=' '){
                res.push_back(s[i]);
            }
        }
        double count1 = 0;
        if(m == 101){
            for(int i = 0; i < res.size(); i++){
                if(res[i] == one[i]){
                    count1++;
                }
            }
            double sum = (double)((2*(double)count1)/3);
            cout << fixed << setprecision(2) << sum << endl; 
        }
        else{
            for(int i = 0; i < res.size(); i++){
                if(res[i] == two[i]){
                    count1++;
                }
            }
            double sum = (double)((2*(double)count1)/3);
            cout << fixed << setprecision(2) << sum << endl; 
        }
    }
    return 0;
}
//code by Duong