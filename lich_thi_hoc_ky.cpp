#include<bits/stdc++.h>
using namespace std;
class MonHoc{
	public:
		string ma_mon_hoc;
		string ten_mon_hoc;
	friend istream &operator >> (istream &in,MonHoc &obj)
	{
		getline(in,obj.ma_mon_hoc);
		getline(in,obj.ten_mon_hoc);
		return in;
	}
};
class LichThi{
	public:
		static int id;
		string ma_ca_thi;
		string ma_mon_hoc,ten_mon_hoc,ngay_thi,gio_thi,nhom_thi;
	friend istream &operator >>(istream &in,LichThi &obj)
	{
		id++;
		string ID = to_string(id);
		while(ID.size() !=3) ID ='0' +ID;
		obj.ma_ca_thi="T"+ID;
		in>>obj.ma_mon_hoc>>obj.ngay_thi>>obj.gio_thi>>obj.nhom_thi;
		return in;
	}
	friend ostream &operator <<(ostream &out , LichThi obj)
	{
		out<<obj.ma_ca_thi<<" "<<obj.ma_mon_hoc<<" "<<obj.ten_mon_hoc<<" "<<obj.ngay_thi<<" "<<obj.gio_thi<<" "<<obj.nhom_thi<<endl;
		return out;
	}
};
int LichThi::id =0;
bool ss(string s1,string s2){
	int sum1=int(s1[0]-'0')*10+int(s1[1]-'0');
	int sum2=int(s2[0]-'0')*10+int(s2[1]-'0');
	int ss1=int(s1[3]-'0')*10+int(s1[4]-'0');
	int ss2=int(s2[3]-'0')*10+int(s2[4]-'0');
	if(ss1<ss2) return true;
	else if(ss1==ss2)
	{
		if(sum1<sum2) return true;
	}
	return false;
}
bool cmp(LichThi s1,LichThi s2)
{
	if(ss(s1.ngay_thi,s2.ngay_thi))
	{
		return true;
	}
	else if(s1.ngay_thi==s2.ngay_thi)
	{
		if(s1.gio_thi<s2.gio_thi)
		{
			return true;
		}
		else if(s1.gio_thi==s2.gio_thi)
		{
			if(s1.ma_mon_hoc<s2.ma_mon_hoc)
			{
				return true;
			}
			return false;
		}
		return false;
	}
	return false;
}
void process(MonHoc mh[],int n,LichThi lt[],int m)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(lt[j].ma_mon_hoc==mh[i].ma_mon_hoc){
				lt[j].ten_mon_hoc=mh[i].ten_mon_hoc;
			}
		}
	}
	sort(lt,lt+m,cmp);
}
int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}