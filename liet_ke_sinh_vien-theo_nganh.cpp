#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
class student{
public:
	string ma, ten, lop, email;
    string major;
};
 
void nhap(class student &a){
	cin >> a.ma;
	scanf("\n");
	getline(cin,a.ten);
	cin >> a.lop >> a.email;
}
 
void in(class student a[2005],int n, int q){
	cin >> q;
	for(int i=0; i<q; i++) {
		scanf("\n");
		string str;
		getline(cin,str);
        for(int j = 0; j < str.length(); j++) {
            str[j] = toupper(str[j]);
        }
        cout << "DANH SACH SINH VIEN NGANH " <<  str << ":" << endl;
		for(int j=0; j<n; j++){
			string c = a[j].ma;
			string d = a[j].lop;
			if(c[5]=='C' || c[5]=='A'){
				if(c[5]==str[0] && d[0]!='E')
				{
					cout << a[j].ma << " ";
					cout << a[j].ten << " " << a[j].lop << " ";
					cout << a[j].email << endl;
				}
			}
            else if(c[5]==str[0]){
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
	in(a,n,q);
	return 0;
}
// code by Duong