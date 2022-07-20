#include <bits/stdc++.h>
using namespace std;
class honso
{
private:
    int nguyen;
    int tu, mau;
 
public:
    honso() {}
    honso(int nguyen, int tu, int mau){
        this->nguyen = nguyen;
        this->tu = tu;
        this->mau = mau;
    }
    void nhapbp(){
        cin >> nguyen >> tu >> mau;
    }
    void xemmh(){
        cout << tu << " " << mau << endl;
    }
    void rutgon(){
        tu = nguyen * mau + tu;
        int ucln = __gcd(tu, mau);
        cout << tu / ucln << " " << mau / ucln << endl;
    }
    friend honso operator+(honso a, honso b);
    friend honso operator-(honso a, honso b);
    friend honso operator*(honso a, int b);
    friend honso operator/(honso a, int b);
    // honso operator + (honso &a);
    operator char *();
    honso(string s)
    {
        int sum = 0;
        int pos;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                pos = i;
                break;
            }
            sum = sum * 10 + s[i] - 48;
        }
        nguyen = sum;
        sum = 0;
        for (int i = pos + 1; i < s.length(); i++)
        {
            if (s[i] == '/')
            {
                pos = i;
                break;
            }
            sum = sum * 10 + s[i] - 48;
        }
        tu = sum;
        sum = 0;
        for (int i = pos + 1; i < s.length(); i++)
        {
            sum = sum * 10 + s[i] - 48;
        }
        mau = sum;
        tu = mau * nguyen + tu;
    }
};
 
honso ::operator char *()
{
    char *x = new char;
    char *y = new char;
    int z = 0, t = 0;
    while (nguyen != 0)
    {
        x[z++] = (nguyen % 10) + 48;
        nguyen /= 10;
    }
    while (z > 0)
    {
        y[t++] = x[--z];
    }
    y[t++] = ' ';
    while (tu != 0)
    {
        x[z++] = (tu % 10) + 48;
        tu /= 10;
    }
    while (z > 0)
    {
        y[t++] = x[--z];
    }
    y[t++] = '/';
    z = 0;
    while (mau != 0){
        x[z++] = (mau % 10) + 48;
        mau /= 10;
    }
    while (z > 0){
        z = z - 1;
        y[t++] = x[z];
    }
    return y;
}
honso operator+(honso a, honso b)
{
    honso c;
    c.tu = (a.mau * a.nguyen + a.tu) + (b.mau * b.nguyen + b.tu);
    c.mau = b.mau * b.mau;
    return c;
}
honso operator-(honso a, honso b){
    honso c;
    c.tu = (a.mau * a.nguyen + a.tu) - (b.mau * b.nguyen + b.tu);
    c.mau = b.mau * b.mau;
    return c;
}
honso operator*(honso a, int b)
{
    honso temp(1, 1, 1);
    temp.tu = (a.nguyen * a.mau + a.tu) * b;
    temp.mau = a.mau * b;
    return temp;
}
honso operator/(honso a, int b)
{
    honso temp(1, 1, 1);
    temp.tu = (a.nguyen * a.mau + a.tu) * b;
    temp.mau = a.mau;
    return temp;
}
main()
{
    honso a, b(2, 3, 5), c;
    a.nhapbp();
    a.rutgon();
    a.xemmh();
    c = a + b;
    c.xemmh();
    c = a - b;
    c.xemmh();
    c = a * 3;
    c.xemmh();
    c = a / 3;
    c.xemmh();
    a = honso("2 3/5");
    a.xemmh();
    cout << "\n b = " << (char *)(b);
    return 0;
}