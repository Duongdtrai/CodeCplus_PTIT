#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;

class hang
{
private:
    int mahang;
    string tenhang;
    ll gia;

public:
    friend class phieunhap;
    void nhap(){
        cin >> mahang;
        cin.ignore();
        getline(cin, tenhang);
        cin >> gia;
    }
    void xem()
    {
        cout << mahang << " " << tenhang << " " << gia;
    }
};
class banggia : public hang{
private:
    vector<hang> dshang;
    int TS;
public:
    friend class phieunhap;
    void nhapbp(){
        cout << "TS: ";
        cin >> TS;
        cout << "Ma  Ten hang  Gia" << endl;
        hang x;
        for (int i = 0; i < TS; i++)
        {
            x.nhap();
            dshang.push_back(x);
        }
    }
    void xemmh()
    {
        cout << "Ma  Ten hang  Gia" << endl;
        for (int i = 0; i < TS; i++)
        {
            dshang[i].xem();
            cout << endl;
        }
    }
};
class hangnhap : public hang
{
private:
    ll soluong;
    ll thanhtien;
    ll ma1;
public:
    friend class phieunhap;
    void xem1()
    {
        cout << soluong << "      " << thanhtien << endl;
    }
};
class phieunhap{
private:
    ll sohoadon;
    string khachhang;
    vector<hangnhap> dshangnhap;
    ll tongtien;
    ll TS;
    banggia b;
    vector<hang> ds;
public:
    void nhapbp(banggia a){
        cout << "So HD: ";
        cin >> sohoadon;
        cout << "Khach hang: ";
        cin.ignore();
        getline(cin, khachhang);
        //  cin >> khachhang;
        cout << "TS: ";
        cin >> TS;
        b = a;
    }
    void ghitep(){
        fstream fout;
        fout.open("a.txt", ios::out);
        fout << sohoadon << endl;
        fout << khachhang << endl;
        fout << TS << endl;
        for (int i = 0; i < b.dshang.size(); i++){
            fout << b.dshang[i].mahang << endl << b.dshang[i].tenhang << endl << b.dshang[i].gia;
            fout << endl;
        }
    }
    void doctep(){
        fstream fin;
        fin.open("a.txt", ios::in);
        int count = 0;
        vector<string> res;
        string s;
        hang x;
        int ok = 0;
        while (!fin.eof()){
            if (count == 0){
                fin >> s;
                fin.ignore();
                res.push_back(s);
                count++;
            }
            else if (count == 1){
                getline(fin, s);
                res.push_back(s);
                count++;
            }
            else if (count == 2){
                getline(fin, s);
                ll sum = 0;
                for(int i = 0; i < s.size(); i++){
                    sum = sum*10 + s[i]-48;
                }
                TS = sum;
                count++;
            }
            else{
                if(ok == 0){
                    getline(fin, s);
                    ll sum = 0;
                    for(int i = 0; i < s.size(); i++){
                        sum = sum*10 + s[i]-48;
                    }
                    x.mahang = sum;
                    ok++;
                }
                else if(ok == 1){
                    getline(fin, s);
                    x.tenhang = s;
                    ok++;
                }
                else if(ok == 2){
                    getline(fin, s);
                    ll sum = 0;
                    for(int i = 0; i < s.size(); i++){
                        sum = sum*10 + s[i]-48;
                    }
                    x.gia = sum;
                    ds.push_back(x);
                    ok = 0;
                }
            }
        }
        cout << "Ma" << " " << "SL" << endl;
        hangnhap y;
        for(int i = 0; i < TS; i++) {
            cin >> y.ma1;
            cin >> y.soluong;
            for (int j = 0; j < ds.size(); j++){
                if(y.ma1 == ds[j].mahang){
                    y.thanhtien = y.soluong * ds[j].gia;
                    break;
                }
            }
            dshangnhap.push_back(y);
        }
        cout << "So HD: " << res[0] << " " << "Khachhang:" << res[1] << endl;
    }
    void xemmh(){
       ll sum = 0;
       cout << "Ma Ten hang   Gia    SL    ThanhTien" << endl;
        for(int i=0; i< TS; i++){
            cout << dshangnhap[i].ma1 << "   ";
            for (int j = 0; j < ds.size(); j++){
                if(dshangnhap[i].ma1 == ds[j].mahang){
                    cout << ds[j].tenhang << "    " << ds[j].gia << "   " ;
                    break;
                }
            }
            dshangnhap[i].xem1();
            sum = sum + dshangnhap[i].thanhtien;
        }  
        tongtien = sum;
        cout << "                  Tong tien: " << tongtien << endl;
    }
};
int main()
{

    banggia a;a.nhapbp();a.xemmh();
    phieunhap b;b.nhapbp(a); b.ghitep();
    phieunhap c;c.doctep();c.xemmh();
    return 0;
}
//code by Duong