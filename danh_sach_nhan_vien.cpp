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
    cin.ignore();
    getline(cin,b.name);
    cin >> b.gender;
    cin >> b.birthday;
    cin.ignore();
    getline(cin,b.address);
    cin >> b.zip;
    cin >> b.day;
   // cout << b.name << " " << b.gender << endl;
}
void inds(struct NhanVien mn[50],int n){
    int duongtro = 1;
    for(int i = 0; i < n; i++){
        string dem;
        stringstream ss;
        ss << duongtro; // lúc này ss đang là số int
        dem = ss.str();
        while(dem.size() < 5){
            dem = "0" + dem;
        }
        cout << dem << " ";
        cout << mn[i].name << " " << mn[i].gender << " " << mn[i].birthday<<" "<< mn[i].address << " " << mn[i].zip << " " << mn[i].day << endl;
        duongtro++;
    }
}
int main(){
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++){
        nhap(ds[i]);
    }
    inds(ds, N);
    return 0;
}
//code by Duong