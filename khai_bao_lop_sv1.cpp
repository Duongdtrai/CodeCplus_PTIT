#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
#define a() a;
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

class SinhVien {
public:
    string masv, ten, lop, ngaysinh;
    float diem;
};

void nhap(SinhVien& a) {
    getline(cin,a.ten);
    cin >> a.lop;
    cin >> a.ngaysinh;
    cin >> a.diem;
}

void in(SinhVien& a) {
    cout << "B20DCCN001" << " ";
    cout << "Nguyen Van A" << " ";
    cout << a.lop << " ";
    if(a.ngaysinh.size()==10) cout << a.ngaysinh ;
    else{
        string s=a.ngaysinh;
        if(a.ngaysinh.size()==8){
            for(int i=0; i<s.size(); i++){
                if(i==0 || i==2) cout << "0";
                cout << s[i];
            }
        }
        else{
            if(s[2]=='/'){
                for(int i=0; i<s.size(); i++){
                if(i==3) cout << "0";
                cout << s[i];
                }
            }
            else{
                for(int i=0; i<s.size(); i++){
                if(i==0) cout << "0";
                cout << s[i];
                }
            }
        }
    }
    cout << " " << fixed << setprecision(2) << a.diem;
}

int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
// code by Dương