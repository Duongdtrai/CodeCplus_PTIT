#include <iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
class PhanSo{
	private:
		ll tu;
        ll mau;
	public:
        PhanSo(ll, ll);
        void rutgon();
		friend istream &operator >> (istream &, PhanSo &);
        friend ostream &operator << (ostream &, PhanSo &);
};
PhanSo :: PhanSo(ll a, ll b){
    this->tu = a;
    this->mau = b;
}
void PhanSo::rutgon(){
    ll ucln = __gcd(tu,mau);
    tu = tu/ucln;
    mau = mau/ucln;
}
istream &operator >> (istream &in, PhanSo &p){
    in >> p.tu;
    in >> p.mau;
    return in;
}
ostream &operator << (ostream &out,PhanSo &p){
    out << p.tu << "/" << p.mau ;
    return out;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}