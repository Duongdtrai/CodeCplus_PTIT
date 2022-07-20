#include<iostream>
#include<cmath>
#include<algorithm>
#define a() a
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
    friend istream &operator >> (istream &, NhanVien &);
    friend ostream &operator << (ostream &, NhanVien &);
};
istream &operator >>(istream &in, NhanVien &p){
    getline(in,p.name);
    getline(in,p.gender);
    getline(in,p.birthday);
    getline(in,p.address);
    getline(in,p.mst);
    getline(in,p.HopDong);
    return in;
}
ostream &operator << (ostream &out, NhanVien& p){
    out << "00001" << " " << p.name << " " << p.gender << " " << p.birthday <<" ";
    out << p.address <<" " << p.mst <<" " << p.HopDong ;
    return out;
}
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
//code by Duong