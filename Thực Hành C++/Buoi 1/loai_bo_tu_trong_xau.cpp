#include<sstream>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
void Handle(string s, string s1,vector<string>&str){
    stringstream p(s); 
    string temp;
    while(p >> temp){ 
        str.push_back(temp);
    }
}
int main(){
    string s;
    getline(cin,s);
    string s1;
    cin  >> s1;
    vector<string>str;
    Handle(s,s1,str);
    for(int i = 0; i <str.size(); i++){
        if(str[i].compare(s1) != 0){
            cout << str[i] << " ";
        }
    }

    return 0;
}
// code by Duong