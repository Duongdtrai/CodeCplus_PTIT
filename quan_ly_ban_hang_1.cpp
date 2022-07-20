#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)
int sttKH = 1;

class KhachHang {
	public:
		int stt;
		string id, name, sex, date, dc;
		friend istream &operator >> (istream &fin, KhachHang &a);
};

map <string, KhachHang> mapKH;

istream &operator >> (istream &fin, KhachHang &a) {
	scanf("\n");
	getline(fin, a.name);
	fin >> a.sex >> a.date;
	scanf("\n");
	getline(fin, a.dc);
	a.stt = sttKH++;
	if(a.stt < 10) a.id = "KH00";
	else a.id = "KH0";
	a.id += to_string(a.stt);
	mapKH[a.id] = a;
	return fin;
}

int sttMH = 1;

class MatHang {
	public:
		int stt;
		string id, name, dv;
		int mua, ban;
		friend istream &operator >> (istream &fin, MatHang &a);
};

map <string, MatHang> mapMH;

istream &operator >> (istream &fin, MatHang &a) {
	scanf("\n");
	getline(fin, a.name);
	fin >> a.dv >> a.mua >> a.ban;
	a.stt = sttMH++;
	if(a.stt < 10) a.id = "MH00";
	else a.id = "MH0";
	a.id += to_string(a.stt);
	mapMH[a.id] = a;
	return fin;
}

int sttHD = 1;

class HoaDon {
	public:
		int stt;
		string kh, mh;
		string id;
		int sl, thanhTien;
		class KhachHang KH;
		class MatHang MH;
	friend istream &operator >> (istream &fin, HoaDon &a);
	friend ostream &operator << (ostream &fout, HoaDon a);
};

istream &operator >> (istream &fin, HoaDon &a) {
	fin >> a.kh >> a.mh >> a.sl;
	a.stt = sttHD++;
	if(a.stt < 10) a.id = "HD00";
	else a.id = "HD0";
	a.id += to_string(a.stt);
	a.thanhTien = mapMH[a.mh].ban * a.sl;
	return fin;
}

ostream &operator << (ostream &fout, HoaDon a) {
	KhachHang kh = mapKH[a.kh];
	MatHang mh = mapMH[a.mh];
	fout << a.id << " " << kh.name << " " << kh.dc << " " << mh.name << " " << mh.dv << " " << mh.mua << " " << mh.ban << " " << a.sl << " " << a.thanhTien << endl;
	return fout;
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
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}