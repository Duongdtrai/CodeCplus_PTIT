#include <iostream>
#include <cmath>
#include <algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;
struct PhanSo{
    ll tu;
    ll mau;
} typedef PhanSo;
void nhap(struct PhanSo &a){
    cin >> a.tu >> a.mau;
}
struct PhanSo tong(PhanSo p,PhanSo q){
    ll xA = p.tu;
    ll yA = p.mau;
    ll xB = q.tu;
    ll yB = q.mau;
    ll bcnn = yA*yB/__gcd(yA,yB);
    ll giantiepA = bcnn/yA;
    ll giantiepB = bcnn/yB;
    ll sumtu = xA*giantiepA + xB*giantiepB;
    ll ucln = __gcd(sumtu,bcnn);
    ll resTu = sumtu / ucln;
    ll resMau = bcnn/ucln;
    struct PhanSo t;
    t.tu = resTu;
    t.mau = resMau;
    return t;
}
void in(struct PhanSo t){
    cout << t.tu <<"/" << t.mau;
}
int main(){
    struct PhanSo p,q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p,q);
    in(t);
}

//code by Duong