#include<bits/stdc++.h>
#define MAX 10000000000
#define MIN -10000000000
using namespace std;
int main(){
	int t;
    cin >> t;
    cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int a = s.size();
		int dem = 0;
		for(int i = 0; i < a; i++){
			if(s[i] == ' '){
				dem++;
			}
		}
		int count = dem+1;
		int even = 0;
		int odd = 0;
		for(int i = 0; i < a;i++){
			if(s[i+1] == ' ' &&(s[i] == '0' ||s[i] == '2' ||s[i] == '4' ||s[i] == '6' ||s[i] == '8' ) ){
				even++;
			}
			else if(s[i+1] == ' ' &&(s[i] == '1' ||s[i] == '3' ||s[i] == '5' ||s[i] == '7' ||s[i] == '9') ){
				odd++;
			}
		}
		for(int i = a-1;i >= 0;i++){
			if(s[i] == '2' ||s[i] == '4' ||s[i] == '6' ||s[i] == '8'){
				even++;
				break;
			}
			else if(s[i] == '1' ||s[i] == '3' ||s[i] == '5' ||s[i] == '7' ||s[i] == '9' ){
				odd++;
				break;
			}
		}
		if(count % 2 == 0 && even > odd ){
			cout << "YES" << endl;
		}
		else if(count % 2 != 0 && even < odd ){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
// code by Duong dep trai
