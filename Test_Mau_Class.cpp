#include <iostream>
#include<cmath>
#include<algorithm>
#include<fstream>
typedef long long ll;
using namespace std;
class PhanSo{
	private:
		 ll tu ;
         ll mau  ;
	public:
        PhanSo(ll tu, ll mau);
        void rutgon2();
        friend istream &operator >>  (istream &, PhanSo &);
        friend ostream &operator << (ostream &, PhanSo &);
    };

PhanSo :: PhanSo(ll tu, ll mau){
    this->tu = tu;
    this->mau = mau;
}

istream &operator >> (istream &in, PhanSo &p){
    in >> p.tu >> p.mau;
}
ostream &operator << (ostream &out, PhanSo &p){

}
int main(){
    ifstream in;
	in.
    ostream out("./sap_dat_day_so.cpp1");
    PhanSo p(1,1);
	cin >> p;
	p.rutgon2();
	cout << p;
	return 0;
}