#include<iostream>
#include<cmath>
#include<algorithm>
#define a() a
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); ccout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

class NhanVien{
private:
    string name;
    string gender;
    string birthday;
    string address;
    string mst;
    string HopDong;
public:
    void nhap(){
        getline(cin,name);
        getline(cin,gender);
        getline(cin,birthday);
        getline(cin,address);
        getline(cin,mst);
        getline(cin,HopDong);
    }
    void xuat(){
        cout << "00001" << " " << name << " " << gender << " " << birthday <<" ";
        cout << address <<" " << mst <<" " << HopDong ;
        
    }
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
//code by Duong