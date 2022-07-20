#include<sstream>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string s1;
    cin  >> s1;
    stringstream p(s); // char *p = strtok(s," ");
    string temp;
    vector<string>str_HuyenOld;
    while(p >> temp){ // temp = Toi
        str_HuyenOld.push_back(temp);
    }
    for(int i = 0; i < str_HuyenOld.size(); i++){
        if(str_HuyenOld[i].compare(s1) != 0){
            cout << str_HuyenOld[i] << " ";
        }
    }
    // strcmp(s1,s2) <=> s1.compare(s2)
    return 0;
}
