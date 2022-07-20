#include<iostream>
#include<cmath>
#include<algorithm>
#include<stack>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
void solve(string s,stack<int>q){
    for(int i = 0; i <= s.size(); i++){
        if(s[i] != 'D' || i == s.size()){ 
            cout << i+1;
            while(q.empty() == 0){ 
                cout << q.top(); 
                q.pop();
            }
        }
        else if(s[i]=='D'){ 
            q.push(i+1); 

        }
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        stack <int> q;
        solve(s, q);
    }
    return 0;
}
//code by Duong