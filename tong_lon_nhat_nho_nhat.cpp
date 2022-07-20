#include<iostream>
#include<cmath>
using namespace std;
long long nhonhat(long long a){
	long long sum1 = 0;
	long long tich = 1;
	while(a!= 0){
		long long t = a%10;
		a = a/10;
		if(t == 6){
			t = 5;
			sum1 = sum1 + tich*t;
		}
		else {
			sum1 = sum1 + tich*t;
		}
		tich = tich * 10;
	}
	return sum1;
}
long long lonnhat(long long a){
	long long sum2 = 0;
	long long tich = 1;
	while(a!= 0){
		long long t = a%10;
		a = a/10;
		if(t == 5){
			t = 6;
			sum2 = sum2 + tich*t;
		}
		else {
			sum2 = sum2 + tich*t;
		}
		tich = tich*10;
	}
	return sum2;
}
int main(){
	int t;
    cin >> t;
	while(t--){
		long long a;
		long long b;
		cin >> a >> b;
		long long min1 = nhonhat(a);
		long long min2 = nhonhat(b);
		long long max1 = lonnhat(a);
		long long max2 = lonnhat(b);
		long long sum1 = min1+min2;
		long long sum2 = max1+max2;
		cout << sum1 << " " << sum2 << endl;
	}
	return 0;
}
// code by Duong
