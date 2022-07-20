#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;
int duongtro = 1;
class NhanVien{
private:
    string name;
    string gender;
    string birthday;
    string address;
    string zip;
    string day;
public:
    friend istream &operator>> (istream&, NhanVien&);
    friend ostream &operator<< (ostream&, NhanVien&);
};
istream &operator>> (istream &in, NhanVien &p){
    scanf("\n");
    getline(in,p.name);
    in >> p.gender;
    in >> p.birthday;
    in.ignore();
    getline(in,p.address);
    in >> p.zip;
    in >> p.day;
    return in;
   // cout << b.name << " " << b.gender << endl;
}
ostream &operator<< (ostream &out, NhanVien &p){
        string dem;
        stringstream ss;
        ss << duongtro;
        dem = ss.str();
        while(dem.size() < 5){
            dem = "0" + dem;
        }
        cout << dem << " ";
        cout << p.name << " " << p.gender << " " << p.birthday<<" "<< p.address << " " << p.zip << " " << p.day << endl;
        duongtro++;
        return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
//code by Duong