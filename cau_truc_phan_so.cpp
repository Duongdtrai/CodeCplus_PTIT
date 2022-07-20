#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct PhanSo{
	ll tu , mau;
};

void nhap(struct PhanSo &a){
	cin >> a.tu >> a.mau;
}

void rutgon(struct PhanSo &a){
	ll x=a.tu;
	ll y=a.mau;
	a.tu = x / __gcd(x,y);
	a.mau = y / __gcd(x,y);
}

void in(struct PhanSo &a){
	cout << a.tu << "/" << a.mau;
}

int main()
{
	struct PhanSo a;
	nhap(a);
	rutgon(a);
	in(a);
	return 0;
}

// code by Dương


