#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
class hang{
protected:
    ll mahang;
    string tenhang;
    ll gia;
public:
    friend class banggia;
    friend class hangdat;
    void nhapbp(){
        cout << "\nMa hang Ten hang Gia: ";
        cin >> mahang >> tenhang >> gia;
    }
    void xemmh(){
        cout << "\n" << mahang <<" " << tenhang << " " << gia; 
    }
};
class banggia{
private:
    vector<hang>dshang;
public:
    void nhapbp(){
        int ts;
        hang x;
        cout << "\nNhap TS hang: "; 
        cin >> ts;
        for(int i = 0; i < ts; i++){
            x.nhapbp();
            dshang.push_back(x);
        }
    }
    void xemmh(){
        cout << "Mahang Tenhang  Gia" << endl;
        for(int i = 0; i < dshang.size(); i++){
            dshang[i].xemmh();
        }
    }
    hang timhang(ll ma){
       for(int i = 0; i < dshang.size(); i++){
           if(ma == dshang[i].mahang ) return dshang[i];
       }
       hang x;
       x.gia = -1;
       return x;
    }
};
class hangdat:public hang{
private:
    ll soluongdat;
    ll thanhtien;
public:
    friend class giohang;
    void nhapbp(banggia d){
        cout << "\nMa hang: ";
        cin >> mahang;
        hang x = d.timhang(mahang);
        tenhang = x.tenhang;
        gia = x.gia;
        cout << "\nSo luong dat: ";
        cin >> soluongdat;
        thanhtien = gia*soluongdat;
    }
    void xemmh(){
        hang::xemmh();
        cout << " " << soluongdat << " " << thanhtien;
    }
};
class giohang{
private:
    ll tongtien ;
    vector<hangdat>dshangdat;
    string khachhang;
public:
    giohang(string khachhang){
        this->khachhang = khachhang;
        tongtien = 0;
    }
    giohang(){

    };
    void themhangdat(hangdat d){
        tongtien += d.thanhtien;
        dshangdat.push_back(d);
    }
    void xemmh(){
        cout << "Khach hang: " << khachhang;
        cout << "    Tong tien: " << tongtien;
        cout << "\nMa hang Tenhang Gia SLdat Thanhtien" << endl;
        for(int i = 0; i < dshangdat.size(); i++){
            dshangdat[i].xemmh();
        }
    }
    void ghitep(){
        fstream fg("pn.dat",ios::out |ios::binary);
        fg.write(reinterpret_cast<char *>(&khachhang),sizeof(string));
        fg.write(reinterpret_cast<char *>(&tongtien),sizeof(ll));
        for(int i = 0; i < dshangdat.size(); i++){
            fg.write(reinterpret_cast<char *>(&dshangdat[i]),sizeof(hangdat));
        }
        fg.close();
    }
    void doctep(){
        fstream fd("pn.dat",ios::in |ios::binary);
        fd.read(reinterpret_cast<char *>(&khachhang),sizeof(string));
        fd.read(reinterpret_cast<char *>(&tongtien),sizeof(ll));
        hangdat x;
        while(1){
            fd.read(reinterpret_cast<char *>(&x),sizeof(hangdat));
            if(!fd) break;
            dshangdat.push_back(x);
        }
        fd.close();
    }
};
int main(){	
    banggia a; a.nhapbp(); a.xemmh(); 
    hangdat b,c;b.nhapbp(a); c.nhapbp(a); //c.xemmh();
    char kh[30];fflush(stdin);cout<<"\nKhach hang: ";cin.getline(kh,30);fflush(stdin);
    giohang d(kh);d.themhangdat(b);d.themhangdat(c); // d.xemmh(); 
    d.ghitep(); giohang e; e.doctep(); e.xemmh();    
    return 0;
}
// code by Duong
