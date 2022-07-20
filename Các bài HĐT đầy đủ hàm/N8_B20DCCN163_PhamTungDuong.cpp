#include<bits/stdc++.h>
using namespace std;

class hang
{
private:
    int mahang;
    string tenhang;
    long gia;

public:
    friend class phieunhap;
    friend class hangnhap;
    friend class banggia;
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
class banggia
{
private:
    vector<hang> dshang;

public:
    friend class hang;
    friend class sophieu;
    void nhapbp()
    {
        int TS;
        cout << "TS: ";
        cin >> TS;
        hang x;
        for (int i = 1; i <= TS; i++)
        {
            x.nhap();
            dshang.push_back(x);
        }
    }
    void xemmh()
    {
        cout << "Ma  Tenhang  Gia" << endl;
        for (int i = 0; i < dshang.size(); ++i)
        {
            dshang[i].xem();
            cout << endl;
        }
    }
    hang timkiem(int m)
    {
        for (int i = 0; i < dshang.size(); i++)
        {
            if (dshang[i].mahang == m)
                return dshang[i];
        }
        hang x;
        x.mahang = 0;
        return x;
    }
};
class hangnhap : public hang
{
private:
    int soluongnhap;
    int thanhtien;

public:
    friend class hang;
    friend class phieunhap;
    friend class banggia;
    void nhap()
    {
        cout << "Ma: ";
        cin >> mahang;
        cout << "So luong: ";
        cin >> soluongnhap;
        thanhtien = soluongnhap * gia;
    }
    void xem()
    {
        hang::xem();
        cout << "  " << soluongnhap << "  " << thanhtien << endl;
    }
};
class phieunhap
{
private:
    int sophieu;
    string khachhang;
    vector<hangnhap> dshangnhap;
    int tongtien;

public:
    friend class hangnhap;
    friend class hang;
    friend class banggia;
    void nhapbp(banggia a)
    {
        int tong;
        cout << "So phieu nhap: ";
        cin >> sophieu;
        cin.ignore();
        cout << "Khach hang: ";
        getline(cin, khachhang);
        cout << "TS: ";
        cin >> tong;
        hangnhap x;
        for (int i = 0; i < tong; i++)
        {
            x.nhap();
            hang y = a.timkiem(x.mahang);
            x.tenhang = y.tenhang;
            x.gia = y.gia;
            x.thanhtien = y.gia * x.soluongnhap;
            dshangnhap.push_back(x);
        }
        tongtien = 0;
        for (int i = 0; i < dshangnhap.size(); i++)
        {
            tongtien += dshangnhap[i].thanhtien;
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
    banggia a;a.nhapbp();a.xemmh();
    phieunhap b;b.nhapbp(a);b.ghitep();
    phieunhap c;c.doctep();c.xemmh();
    return 0;
}
//code by Duong