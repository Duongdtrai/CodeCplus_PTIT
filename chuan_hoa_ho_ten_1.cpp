#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<cmath>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 32;
        }
    }
    stringstream p(s);
    vector<string>s1;
    string temp;
    while( p >> temp){
        for(int i = 0; i < temp.size(); i++){
            temp[i] = temp[i] - 32;
            break;
        }
        s1.push_back(temp);
    }
    for(int i = 0; i < s1[s1.size()-1].size(); i++){
        if(s1[s1.size()-1][i] >= 'a' && s1[s1.size()-1][i] <='z'){
            s1[s1.size()-1][i] = s1[s1.size()-1][i] - 32;
        }
    }
    for(int i = 0; i < s1.size(); i++){
        if(i == s1.size()-2){
            cout<< s1[i] << ", ";
        }
        else if(i == s1[i].size() -1 ){
            cout << s1[i];
        }
        else{
            cout << s1[i] << " ";
        }
        
    }
    return 0;
}