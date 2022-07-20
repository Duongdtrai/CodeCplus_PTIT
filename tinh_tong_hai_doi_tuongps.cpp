#include <bits/stdc++.h>
#include<algorithm>
typedef long long ll;
using namespace std;

class PhanSo{
public:
	ll tu, mau;

	PhanSo(){}
	PhanSo(ll tu, ll mau){
		this->tu = tu;
		this->mau = mau;
	}
	friend istream &operator>>(istream &ist, PhanSo &b){
		ist >> b.tu;
		ist >> b.mau;
		return ist;
	}
	void dongian(){
		ll uc = __gcd(tu,mau);
		tu /= uc;
		mau /= uc;
	}
	friend PhanSo operator+(PhanSo a, PhanSo b);
	friend ostream &operator<<(ostream &ost, PhanSo b){
		b.dongian();
		ost << b.tu << "/" << b.mau;
		return ost;
	}
	
};
PhanSo operator+(PhanSo a, PhanSo b){
	PhanSo temp;
	temp.tu = a.tu * b.mau + b.tu * a.mau;
	temp.mau = b.mau * a.mau;
	return temp;
}

int main(){
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q<< endl;
	return 0;
}