#include <iostream>
#include <cmath>
#include <algorithm>
#include<string>
#include<sstream>
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;
struct NhanVien{
    string name;
    string gender;
    string birthday;
    string address;
    string zip;
    string day;
};
void nhap(struct NhanVien &b){
    getline(cin,b.name);
    cin >> b.gender;
    cin >> b.birthday;
    cin.ignore();
    getline(cin,b.address);
    cin >> b.zip;
    cin >> b.day;
   // cout << b.name << " " << b.gender << endl;
}
void in(struct NhanVien mn){
    int duongtro = 1;
        string dem;
        stringstream ss;
        ss << duongtro; // lúc này ss đang là số int
        dem = ss.str();
        while(dem.size() < 5){
            dem = "0" + dem;
        }
        cout << dem << " ";
        cout << mn.name << " " << mn.gender << " " << mn.birthday<<" "<< mn.address << " " << mn.zip << " " << mn.day << endl;
        duongtro++;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
//code by Duong