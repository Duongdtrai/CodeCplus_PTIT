#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<cmath>
using namespace std;
void Solve(string s, vector<string>&s1){
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 32;
        }
    }
    stringstream p(s);
    string temp;
    while( p >> temp){
        s1.push_back(temp);
    }
}
int main(){
    string s;
    getline(cin,s);
    vector<string>s1;
    Solve(s,s1);
    cout << s1[s1.size() - 1];
    for(int i = 0; i < s1.size() - 1; i++){
        cout << s1[i][0];
    }
    cout << "@ptit.edu.vn";
    return 0;
}