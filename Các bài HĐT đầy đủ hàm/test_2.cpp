#include <bits/stdc++.h>
using namespace std;
class thangnam
{
private:
    int thang, nam;

public:
    thangnam() {}
    thangnam(int thang, int nam)
    {
        this->thang = thang;
        this->nam = nam;
    }
    void nhapbp()
    {
        cin >> thang >> nam;
    }
    void xemmh()
    {
        cout << thang << " " << nam << endl;
    }
    friend thangnam operator+(thangnam a, int b);
    friend thangnam operator-(thangnam a, int b);
    // thangnam operator + (thangnam &a);
    operator char *();
    bool operator>(thangnam &a);
    thangnam(string s)
    {
        int sum = 0;
        int pos = 0;
        int ok = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if ('0' <= s[i] && s[i] <= '9')
            {
                sum = sum * 10 + (int)(s[i] - 48);
                ok = 1;
            }
            else
            {
                pos = i;
                if (ok == 1)
                {
                    break;
                }
            }
        }
        thang = sum;
        sum = 0;
        for (int i = pos; i < s.length(); i++)
        {
            if ('0' <= s[i] && s[i] <= '9')
            {
                sum = sum * 10 + s[i] - 48;
            }
        }
        nam = sum;
    }
};
bool thangnam :: operator>(thangnam &a){
    return (thang + nam * 12 > a.thang + a.nam * 12);
}
// thangnam thangnam::operator + (thangnam &a){
    
// }
thangnam ::operator char *()
{
    char *x = new char;
    char *y = new char;
    int z = 0, t = 0;
    while (thang != 0)
    {
        x[z++] = (thang % 10) + 48;
        thang /= 10;
    }
    while (z > 0)
    {
        y[t++] = x[--z];
    }
    y[t++] = ' ';
    while (nam != 0)
    {
        x[z++] = (nam % 10) + 48;
        nam /= 10;
    }
    while (z > 0)
    {
        y[t++] = x[--z];
    }
    return y;
}
thangnam operator+(thangnam a, int b){
    thangnam temp(1, 1);
    temp.thang = a.thang + b;
    temp.nam = a.nam;
    if (temp.thang > 12)
    {
        temp.nam += temp.thang / 12;
        temp.thang %= 12;
    }
    return temp;
}
thangnam operator-(thangnam a, int b)
{
    thangnam temp(1, 1);
    temp.thang = a.thang - b;
    temp.nam = a.nam;
    if (temp.thang < 0)
        temp.thang = abs(temp.thang);
    if (temp.thang > 12)
    {
        temp.nam -= temp.thang / 12;
        temp.thang %= 12;
    }
    return temp;
}
int main()
{
    thangnam a, b(10, 2021), c;
    a.nhapbp();
    a.xemmh();
    c = thangnam("thang 11 nam 2021");
    c.xemmh();
    cout << (char *)(c) << "\n";
    c = a + 20;
    c.xemmh();
    c = a - 20;
    c.xemmh();
    if (a > b)
        cout << "a>b";
    else
        cout << "a<b";
    return 0;
}

// Cách 2 dùng cho + - x :          // tương tự - x : ~(là đảo ngược)
// thangnam operator+(thangnam a){
//     thangnam c;
//     c.thang = thang + a.thang;
//     c.nam = nam + a.nam;
// }

// thangnam operator-(thangnam a){
//     thangnam c;
//     c.thang = thang - a.thang;
//     c.nam = nam - a.nam;
// }
// thangnam operator*(thangnam a){
//     thangnam c;
//     c.thang = thang * a.thang;
//     c.nam = nam * a.nam;
// }

// thangnam operator/(thangnam a){
//     thangnam c;
//     c.thang = thang / a.thang;
//     c.nam = nam / a.nam;
// }

// thangnam operator~(){
//     thangnam c;
//     c.thang = thang;
//     c.nam = nam;
// }

// cách khai báo ở class
//      thangnam :: thangnam(int a,int b){
//          this->thang = a;
//          this->nam = b;
//      }
//      bool thangnam:: operator > (thangnam &a) {
//            return (thang+nam*12 > a.thang+a.nam*12);
//      }
// có thể thay bool với void, int , ll, string,....

// ĐỌC là ( đối với có kiểu): tên kiểu rồi cả class trỏ đến(::) tên cái hàm khai báo trong class
// ví dụ :  int getName(int a);
//          int thangnam :: getName(int a){...};

// Không có kiểu :   tên class trỏ đến(::) tên hàm khai báo trong class
// ví dụ :  thangname(int a);
//          thangnam :: thangname(int a){...};

// lưu ý cách 1 và cách 2
// class{
//     phanso operator + (phanso b);
//     friend phanso operator+ (phanso b, phanso a);
// }
// phanso phanso::operator + (phanso b) cách 1: không friend
// phanso operator+ (phanso b, phanso a) cách 2: có friend