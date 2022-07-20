#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

struct students{
    string name;
    string date;
    string number;
};
int main(){
    ifstream fin("SOTAY.txt",ios::in);
    ofstream fout("DIENTHOAI.txt",ios::out);
    struct students a[100];
    int size = 0;
    int dem = 0;
    while(!fin.eof()){
        if(dem == 0){
            dem++;
            string s;
            getline(fin,s);
            string res = "";
            for(int i = 6; i < s.length(); i++){
                res = res + s[i];
            }
            a[size].date = res;
        }
        else if(dem == 1){
            string s;
            getline(fin, s);
            a[size].name = s;
            dem++;
        }
        else if(dem == 2){
            string s;
            getline(fin, s);
            a[size].number = s;
            size++;
            dem = 0;
        }
    }
    fin.close();
    for(int i = 0; i < size; i++){
        fout << a[i].name << ": " << a[i].number <<" " << a[i].date << endl;
    }
    fout.close();
    return 0;
}
//code by Duong