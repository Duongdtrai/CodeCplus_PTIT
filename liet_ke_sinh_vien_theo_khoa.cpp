#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
class student{
public:
	string ma, ten, lop, email;
    string year;
    string ZipYear;
};

void nhap(class student &a){
	cin >> a.ma;
	scanf("\n");
	getline(cin,a.ten);
	cin >> a.lop >> a.email;
}

void in(class student a[], class student s[],int n, int q){
	cin >> q;
	for(int i=0; i<q; i++) {
		cin >> s[i].year;
	}
	for(int i=0; i<q; i++){
        cout << "DANH SACH SINH VIEN KHOA " <<  s[i].year << ":" << endl;
		string b= s[i].year;
		for(int j=0; j<n; j++){
			string c = a[j].lop;
			if(b[2] == c[1]  && b[3] == c[2]){
				cout << a[j].ma << " ";
				cout << a[j].ten << " " << a[j].lop << " ";
				cout << a[j].email << endl;
			}
		}
	}
}
int main()
{
	class student a[2005],s[2005];
	int q; 
	int n; cin >> n;
	for(int i=0; i<n; i++){
		nhap(a[i]);
	}
	in(a,s,n,q);
	return 0;
}

// code by Duong
