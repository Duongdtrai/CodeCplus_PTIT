#include <bits/stdc++.h>
using namespace std;
struct data{
    string name;
    string phone;
    string date;
};
bool process(data &a, data &b){
    return a.name < b.name;
}
int main(){
    fstream fin("SOTAY.txt",ios::in);
    fstream fout("DIENTHOAI.txt",ios::out);
    vector<data> a;
    int size = 0;
    struct data temp;
    while(!fin.eof()){
        string s;
        getline(fin,s);
        if(size == 0 && s!= ""){
            temp.date = s;
            size++;
        }
        else if(size == 1 && s!= ""){
            temp.name = s;
            size++;
        }
        else if(size == 2 && s!= ""){
            temp.phone = s;
            a.push_back(temp);
            size = 0;
        }
    }
    fin.close();
    for (int i = 0; i < a.size(); i++){
        fout << a[i].date << endl << a[i].name << endl << a[i].phone << endl;
    }
    fout.close();
    return 0;
}