#include<bits/stdc++.h>
using namespace std;

int check(string tmp){
	if(tmp.length() > 3)
		return 0;
	if(tmp.length() == 3 && tmp > "255")
		return 0;
	return 1;

}
int main(){
	int tester;
	cin >> tester;
	while(tester--){
		string s;
		cin >> s;
		int ktra = 1;
		int dem = 0;
		for (int i = 0; i < s.length(); i++){
			if(s[i] == '.'){
				s[i] = ' ';
				dem++;
				continue;
			}
			if(s[i] < '0' || s[i] > '9'){
				ktra = 0;
				break;
			}
		}
		if(dem != 3 || ktra == 0)
			cout<< "NO" <<endl;
		else{
			stringstream ss(s);
			string tmp;
			ktra = 0;
			int dem = 0;
			while (ss >> tmp)
			{
				if(check(tmp) == 1)
					dem++;
				else
					ktra = 1;
			}
			if(dem == 4 && ktra == 0)
				cout << "YES" <<endl;
			else
				cout << "NO" <<endl;
		}

		
	}
	return 0;
}

// dkwu.fsk.56.
// 227.5..88



// void xuat(int k) {
// 	if(k) {
// 		cout << "YES" <<endl;
// 	} else {
// 		cout << "NO" << endl;
// 	}
// }

// int check(string a){
// 	if(a.size()>3){
// 		return 0;
// 	}
// 	if(a.size()==3&&a>"255"){
// 		return 0;
// 	}
// 	return 1;
// }

// int main() {
// 	int t;
// 	cin >> t;
// 	while(t--) {
// 		string a;
// 		cin >> a;
// 		int n=0, j=0, kt=1, dem=0;
// 		for(int i=0; i<a.size(); i++) {
// 			if(a[i]=='.') {
// 				a[i]=' ';
// 				dem++;
// 				continue;
// 			}
// 			if(a[i]<'0'||a[i]>'9') {
// 				kt=0;
// 				break;
// 			}
// 		}
// 		if(dem!=3)	kt=0;
// 		dem=0;
// 		string k;
// 		stringstream s(a);
// 		while(s>>k){
// 			if(check(k)){
// 				dem++;
// 			}else{
// 				kt=0;
// 			}
// 		}
// 		if(dem!=4)	kt=0;
// 		xuat(kt);
// 	}
// }
/*
5
dkwu.fsk.56.
227.5..88
*/
