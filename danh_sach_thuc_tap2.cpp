#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
struct student{
	string ma, ten, lop, email, doanhnghiep;
	int stt;
};

void nhap(struct student &a){
	cin >> a.ma;
	cin.ignore();
	getline(cin,a.ten);
	cin >> a.lop >> a.email >> a.doanhnghiep;
}

void in(struct student a[], struct student s[],int n, int q){
	cin >> q;
	for(int i=0; i<q; i++) {
		cin >> s[i].doanhnghiep;
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i].ma>a[j].ma){
				struct student t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(int i=0; i<q; i++){
		string b=s[i].doanhnghiep;
		for(int j=0; j<n; j++){
			string c=a[j].doanhnghiep;
			if(b.size()==c.size()){
				int dem=0;
				for(int k=0; k<b.size(); k++){
					if(b[k]==c[k]) dem++;
				}
				if(dem==b.size()){
				cout << a[j].stt << " " << a[j].ma << " ";
				cout << a[j].ten << " " << a[j].lop << " ";
				cout << a[j].email << " " << a[j].doanhnghiep << endl;
				}
			}
		}
	}

}
int main()
{
	struct student a[100],s[100];
	int q; 
	int n; cin >> n;
	for(int i=0; i<n; i++){
		a[i].stt=i+1;
		nhap(a[i]);
	}
	in(a,s,n,q);
	return 0;
}

// code by Duong


