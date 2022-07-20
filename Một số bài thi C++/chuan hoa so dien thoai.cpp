#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin >> test;
	cin.ignore();
	while(test--){
		string s;
		getline(cin, s);
		for(int i=0; i< s.length(); i++){
			if(s[i] <  '0' || s[i] > '9')
				s[i] = ' ';
		}
		stringstream p(s);
		string tmp;
		string res ="";
		while(p >> tmp){
			res = res + tmp;
		}
		if(res[0] == '8' && res[1] == '4'){
			cout << "0";
			for(int i = 2; i < res.length(); i++){
				cout << res[i];
			}
		}
		else
			cout << res;
		cout << endl;
	}
	return 0;
}
/*
5
0946 940 087
0946-940-087
0946.940.087
8497878782
+8464661316
*/


/*
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
	    int i=0;
		string a, b="", k;
		getline(cin ,a);
		for( i=0; i<a.size(); i++){
			if(a[i]<'0'||a[i]>'9'){
				a[i]=' ';
			}
		}
		stringstream s(a);
		while(s>>k){
			b=b+k;
		}
		if(b[0]=='8'&&b[1]=='4'){
			cout << 0;
			for(int i=2; i<b.size(); i++){
				cout << b[i];
			}
		}else{
			cout << b;
		}
		cout << endl;
	}
*/