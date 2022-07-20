#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
class student{
public:
	string ma, ten, lop, email;
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
		cin >> s[i].lop;
	}
	for(int i=0; i<q; i++){
        cout << "DANH SACH SINH VIEN LOP " <<  s[i].lop << ":" << endl;
		string b= s[i].lop;
		for(int j=0; j<n; j++){
			string c = a[j].lop;
			if(b == c){
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
