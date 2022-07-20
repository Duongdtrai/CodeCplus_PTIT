#include<iostream>
using namespace std;
long long ucln(long long a, long long b){
	while(b > 0){
		long long tmp = a%b;
		a = b;
		b = tmp;
	}
	return a;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a,b;
		cin >> a >> b;
		long long bcnn = (a*b)/ucln(a,b);
		cout << bcnn << " " << ucln(a,b) << endl;
	}
	return 0;
}
// code by Duong dep trai


