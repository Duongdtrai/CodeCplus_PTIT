#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    ifstream fileIn("VANBAN.txt");
    ofstream fileOut("MUCLUC.txt");
    string s;
    int page = 0;
    string level = "";
    string title = "";
    while(!fileIn.eof()){
        getline(fileIn, s);
        string check = s.substr(0, 4);
        if(check.compare("Page") == 0){
            page = 0;
            for(int i = 5; i <s.size(); i++){
                page = (page)*10 + (s[i] - '0'); 
            }
            continue;
        }else{
            check = s.substr(0, 7);
            if(check.compare("Level1:") == 0){
                title = s.substr(8, s.size() - check.size());
                level = ">";
            }else if(check.compare("Level2:") == 0){
                title = s.substr(8, s.size() - check.size());
                level = ">>";
            }else if(check.compare("Level3:") == 0){
                title = s.substr(8, s.size() - check.size());
                level = ">>>";
            }else continue;
        }
        fileOut << level << title << "--- " << page << endl;
    }
    fileIn.close();
    fileOut.close();
    return 0;
}