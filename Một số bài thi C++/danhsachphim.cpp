#include<bits/stdc++.h>
using namespace std;
class TheLoai{
	public:
	string ten;
	friend istream &operator >>(istream &input,TheLoai &a){
		getline(cin,a.ten);
		return input;
	}
};
int i=1;
class Phim{
	public:
	string ma,ngayt,ten,theloai,maso;
	int y,ngay,thang,nam;
	friend istream &operator >>(istream &input,Phim &b){
		cin >> b.ma >> b.ngayt;
		b.ngay= atoi(b.ngayt.substr(0,2).c_str());
		b.thang = atoi(b.ngayt.substr(3,2).c_str());
		b.nam=atoi(b.ngayt.substr(6,4).c_str());
		cin.ignore();
		getline(cin,b.ten);
		cin >> b.y;
		string v=to_string(i);
		i++;
		while(v.length() < 3) v="0"+v;
		v="P"+v;
		b.maso=v;
		return input;
	}
	friend ostream &operator <<(ostream &output,Phim &b){
		cout <<b.maso << " " << b.theloai << " " << b.ngayt << " " << b.ten << " " << b.y << endl;
		return output;
	}
};
bool cmp(Phim a,Phim b){
	if(a.ngayt != b.ngayt){
		if(a.nam != b.nam) return a.nam < b.nam;
		if(a.thang != b.thang) return a.thang < b.thang;
		if(a.ngay != b.ngay) return a.ngay < b.ngay;
	}
	if(a.ten != b.ten) return a.ten < b.ten;
	return a.y > b.y;
	
}
void process(TheLoai tl[],int n,Phim p[],int m){
	for(int i=0 ;i <m ;i++){
		int z=atoi(p[i].ma.substr(2,3).c_str());
		p[i].theloai=tl[z-1].ten;
	}
	sort(p,p+m,cmp);
}
main(){
	int n,m;
	cin >> n >> m;
	cin.ignore();
    TheLoai tl[100];
    Phim p[1000];
    for(int i=0; i<n;i++){
    	cin >> tl[i];
	}
	for(int i=0 ;i <m;i++){
		cin >> p[i];
	}
	process(tl,n,p,m);
	for(int i=0 ; i<m ; i++){
		cout << p[i];
	}}
