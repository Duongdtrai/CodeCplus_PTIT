#include<iostream>
#include<cmath>
using namespace std;
long long ucln(long long a, long long b){
	long long m = a;
	long long n = b;
	while(b > 0){
		long long tmp = a%b;
		a = b;
		b = tmp;
	}
	return	(m*n)/a;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a = 1;
		for(long long i = 2; i <= n; i++){
			a = ucln(a,i);
		}
		cout << a << endl;
	}
	return 0;
}
// code by Duong dep trai


