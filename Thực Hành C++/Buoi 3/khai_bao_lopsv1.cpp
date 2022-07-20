#include <bits/stdc++.h>
#define all(a) begin(), end()
#define a() a;
using namespace std;
typedef long long int ll;
const int mod = 1e9 + 7;

class SinhVien
{
private:
    string masv, ten, lop, ngaysinh;
    float diem;

public:
    void nhap()
    {
        getline(cin, ten);
        cin >> lop;
        cin >> ngaysinh;
        cin >> diem;
    }
    void xuat()
    {
        cout << "B20DCCN001"<< " ";
        cout << ten << " ";
        cout << lop << " ";
        if (ngaysinh.size() == 10)
            cout << ngaysinh;
        else
        {
            string s = ngaysinh;
            if (ngaysinh.size() == 8)
            {
                for (int i = 0; i < s.size(); i++)
                {
                    if (i == 0 || i == 2)
                        cout << "0";
                    cout << s[i];
                }
            }
            else
            {
                if (s[2] == '/')
                {
                    for (int i = 0; i < s.size(); i++)
                    {
                        if (i == 3)
                            cout << "0";
                        cout << s[i];
                    }
                }
                else
                {
                    for (int i = 0; i < s.size(); i++)
                    {
                        if (i == 0)
                            cout << "0";
                        cout << s[i];
                    }
                }
            }
        }
        cout << " " << fixed << setprecision(2) << diem;
    }
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
// code by Dương