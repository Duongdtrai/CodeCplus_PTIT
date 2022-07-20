#include<bits/stdc++.h>
using namespace std;

class nhanvien{
private:
    int mahang;
    string tenhang;
    long gia;

public:
    friend class phieunhap;
    friend class hangnhap;
    friend class danhsach;
    void nhap()
    {
        cout << "Ma: ";
        cin >> mahang;
        cin.ignore();
        cout << "Ten Hang: ";
        getline(cin, tenhang);
        cout << "Gia: ";
        cin >> gia;
    }
    void xem()
    {
        cout << mahang << "  " << tenhang << "  " << gia;
    }
};
class danhsach
{
private:
    vector<nhanvien> ds;

public:
    friend class nhanvien;
    friend class sophieu;
    void nhapbp()
    {
        int TS;
        cout << "TS: ";
        cin >> TS;
        nhanvien x;
        for (int i = 1; i <= TS; i++)
        {
            x.nhap();
            ds.push_back(x);
        }
    }
    void xemmh()
    {
        cout << "Ma  Tenhang  Gia" << endl;
        for (int i = 0; i < ds.size(); ++i)
        {
            ds[i].xem();
            cout << endl;
        }
    }
    nhanvien timkiem(int m)
    {
        for (int i = 0; i < ds.size(); i++)
        {
            if (ds[i].mahang == m)
                return ds[i];
        }
        nhanvien x;
        x.mahang = 0;
        return x;
    }
};
class luongnv : public nhanvien
{
private:
    int ngaycong;
    int luong;

public:
    friend class hang;
    friend class phieunhap;
    friend class danhsach;
    void nhap(){
        cout << "Thang: ";
        cin >> mahang;
        cout << "So luong: ";
        cin >> ngaycong;
        luong = ngaycong * gia;
    }
    void xem()
    {
        nhanvien::xem();
        cout << "  " << ngaycong << "  " << luong << endl;
    }
};
class phieunhap{
private:
    int thang;
    string khachhang;
    vector<luongnv> dshangnhap;
    int tongtien;

public:
    friend class hangnhap;
    friend class hang;
    friend class danhsach;
    void nhapbp(danhsach a)
    {
        int tong;
        cout << "Thang: ";
        cin >> thang;
        cin.ignore();
        cout << "Khach hang: ";
        getline(cin, khachhang);
        cout << "TS: ";
        cin >> tong;
        luongnv x;
        for (int i = 0; i < tong; i++){
            x.nhap();
            nhanvien y = a.timkiem(x.mahang);
            x.tenhang = y.tenhang;
            x.gia = y.gia;
            x.luong = y.gia * x.ngaycong;
            dshangnhap.push_back(x);
        }
        tongtien = 0;
        for (int i = 0; i < dshangnhap.size(); i++)
        {
            tongtien += dshangnhap[i].luong;
        }
    }
    void ghitep()
    {
        fstream fg("b.txt", ios::out | ios::binary);
        fg.write(reinterpret_cast<char *>(this), sizeof(phieunhap));
        fg.close();
    }
    void doctep()
    {
        fstream fd("b.txt", ios::in | ios::binary);
        fd.read(reinterpret_cast<char *>(this), sizeof(phieunhap));
        fd.close();
    }
    void xemmh()
    {
        cout << "So phieu nhap: ";
        cout << sophieu << " ";
        cout << "Khach hang: ";
        cout << khachhang << endl;
        cout << "Ma Ten hang Gia SL ThanhTien" << endl;
        for (int i = 0; i < dshangnhap.size(); i++)
        {
            dshangnhap[i].xem();
        }
        cout << "           Tongtien: " << tongtien;
    }
};

int main()
{
    danhsach a;a.nhapbp();a.xemmh();
    phieunhap b;b.nhapbp(a);b.ghitep();
    phieunhap c;c.doctep();c.xemmh();
    return 0;
}
//code by Duong