#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
struct PhanSo{
    ll tu;
    ll mau;
}typedef PhanSo;
void process(PhanSo a,PhanSo b){
    ll xA = a.tu;
    ll yA = a.mau;
    ll xB = b.tu;
    ll yB = b.mau;
    ll bcnn = yA*yB/__gcd(yA,yB);
    ll giantiepA = bcnn / yA;
    ll giantiepB = bcnn / yB;
    ll ATU = a.tu * giantiepA;
    ll BTU = b.tu * giantiepB;
    ll sumtu = ATU + BTU;
    sumtu = sumtu * sumtu;
    ll summau = bcnn*bcnn;
    ll uclnC = __gcd(sumtu,summau);
    ll sumtuC = sumtu/uclnC ;
    ll summauC = summau/uclnC;
    cout << sumtuC <<"/" << summauC << " ";
    ll tuD = a.tu * b.tu * sumtuC;
    ll mauD = a.mau * b.mau * summauC;
    ll uclnD = __gcd(tuD,mauD);
    cout << tuD/uclnD << "/" << mauD/uclnD <<endl;

}
int main(){
    int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
    return 0;
}
//code by Duong