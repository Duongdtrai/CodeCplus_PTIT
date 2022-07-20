#include<bits/stdc++.h>
using namespace std;
class KhachHang;
class MatHang;
map<string,KhachHang> KH;
map<string,MatHang> MH;
int l1=1,l2=1,l3=1;
class KhachHang{
	public: string mkh,name,age,date,dc;
	friend istream& operator >> (istream&is,KhachHang &p){
		string k="",k1="KH";
		k = to_string(l1);
		while(k.size()<3) k = '0'+k;
		k1=k1+k;p.mkh = k1;
		scanf("\n");
		getline(is,p.name);
		is >> p.age >> p.date;
		scanf("\n");
		getline(is,p.dc);
		KH[p.mkh]=p;
		l1++;
		return is;
	}
};
class MatHang{
	public: string mmh,name,dv;
	int gm,gb;
	friend istream& operator >> (istream&is,MatHang &p){
		string k="",k1="MH";
		k = to_string(l2);
		while(k.size()<3) k = '0'+k;
		k1=k1+k;p.mmh = k1;
		scanf("\n");
		getline(is,p.name);
		is >> p.dv >> p.gm >> p.gb;
		MH[p.mmh]=p;
		l2++;
		return is;
	}
};
class HoaDon{
	public: string mhd1,mkh1,mmh1;
	int sl1;
	long long thanhtien,loinhuan;
	friend istream& operator >> (istream& is, HoaDon& p){
		string k="",k1="HD";
		k = to_string(l3);
		while(k.size()<3) k = '0'+k;
		k1=k1+k;p.mhd1 = k1;
		scanf("\n");
		is >> p.mkh1 >>  p.mmh1 >> p.sl1;
		p.thanhtien=p.sl1*MH[p.mmh1].gb;
		p.loinhuan=p.sl1*(MH[p.mmh1].gb-MH[p.mmh1].gm);
		l3++;
		return is;
	}
	friend ostream& operator << (ostream& out,HoaDon &p){
		out<<p.mhd1<<" ";
		out<<KH[p.mkh1].name<<" ";
		out<<KH[p.mkh1].dc<<" ";
		out<<MH[p.mmh1].name<<" ";
		out<<p.sl1<<" ";
		out<<p.thanhtien<<" ";
		out<<p.loinhuan<<endl;
		return out;
	}
};
bool cmp(HoaDon a,HoaDon b){
	if(a.loinhuan!=b.loinhuan) return a.loinhuan > b.loinhuan;
	return a.mhd1 < b.mhd1;
}
void sapxep(HoaDon ds[], int K){
	sort(ds,ds+K,cmp);
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}