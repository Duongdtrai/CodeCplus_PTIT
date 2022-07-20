#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
class hang{
protected:
    string tenhang;
    ll gia;
public:
    friend class banggia;
    friend class hangnhap;
    void nhapbp(){
        cout << "\n ten hang, gia: ";
        cin >> tenhang >> gia;
    }
    void xemmh(){
        cout << "\n " << tenhang << " " << gia; 
    }
};
class banggia{
private:
    vector<hang>dshang;
public:
    void nhapbp(){
        int ts;
        hang x;
        cout << "\n nhap TS hang: "; 
        cin >> ts;
        for(int i = 0; i < ts; i++){
            x.nhapbp();
            dshang.push_back(x);
        }
    }
    void xemmh(){
        for(int i = 0; i < dshang.size(); i++){
            dshang[i].xemmh();
        }
    }
    hang timhang(string th){
       for(int i = 0; i < dshang.size(); i++){
           if(th == dshang[i].tenhang ) return dshang[i];
       }
       hang x;
       x.gia = -1;
       return x;
    }
};
class hangnhap:public hang{
private:
    ll soluongnhap;
    ll thanhtien;
public:
    friend class phieunhap;
    void nhapbp(banggia d){
        cout << "\n Ten hang:";
        cin >> tenhang;
        hang x = d.timhang(tenhang);
        gia = x.gia;
        cout << "\n So luong nhap:";
        cin >> soluongnhap;
        thanhtien = gia*soluongnhap;
    }
    void xemmh(){
        hang::xemmh();
        cout << " " << soluongnhap << " " << thanhtien;
    }
};
class phieunhap{
private:
    ll sophieu,tongtien;
    vector<hangnhap>dshangnhap;
public:
    void nhapbp(banggia d){
        tongtien = 0;
        hangnhap x;
        ll ts;
        cout << "\n so phieu, ts hang nhap: ";
        cin >> sophieu >> ts;
        for(int i = 0; i < ts; i++){
            x.nhapbp(d);
            tongtien += x.thanhtien;
            dshangnhap.push_back(x);
        }
    }
    void xemmh(){
        cout << "\n so phieu: " << sophieu;
        cout << "\n tong tien: " << tongtien;
        for(int i = 0; i < dshangnhap.size(); i++){
            dshangnhap[i].xemmh();
        }
    }
    void ghitep(){
        fstream fg("pn.dat",ios::out |ios::binary);
        fg.write(reinterpret_cast<char *>(&sophieu),sizeof(ll));
        fg.write(reinterpret_cast<char *>(&tongtien),sizeof(ll));
        for(int i = 0; i < dshangnhap.size(); i++){
            fg.write(reinterpret_cast<char *>(&dshangnhap[i]),sizeof(hangnhap));
        }
        fg.close();
        
    }
    void doctep(){
        fstream fd("pn.dat",ios::in |ios::binary);
        fd.read(reinterpret_cast<char *>(&sophieu),sizeof(ll));
        fd.read(reinterpret_cast<char *>(&tongtien),sizeof(ll));
        hangnhap x;
        while(1){
            fd.read(reinterpret_cast<char *>(&x),sizeof(hangnhap));
            if(!fd) break;
            dshangnhap.push_back(x);
        }
        fd.close();
    }

};
int main()
{
    banggia a;a.nhapbp();a.xemmh();
    phieunhap b;b.nhapbp(a);b.ghitep();
    phieunhap c;c.doctep();c.xemmh();
    return 0;
}