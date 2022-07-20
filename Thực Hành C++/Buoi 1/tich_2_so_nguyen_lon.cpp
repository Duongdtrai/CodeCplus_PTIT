#include<string>
#include<iostream>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1;
		cin >> s1;
		cin.ignore();
		string s2;
		cin >> s2;
		if(s1.size() < s2.size()){
			swap(s1,s2);
		}
		reverse(s2.begin(),s2.end());
		int result[2005];
		for(int i = s2.size(); i < s1.size(); i++){
			s2 = s2 + '0';
		}
		reverse(s2.begin(),s2.end());
		if(s1 < s2){
			swap(s1,s2);
		}
		int a[1005];
		int b[1005];
		int d[1005];
		int x = 0;
		for(int i = 0 ; i < s1.size(); i++){
			a[i] = (int)(s1[i] - 48);
			b[i] = (int)(s2[i] - 48);
			d[i] = 0;
		}
		for(int i = s1.size()-1 ; i >= 0; i--){
			d[i] = a[i] - b[i];
			if(d[i] < 0){
				d[i] = 10 + a[i] - b[i];
				a[i-1] = a[i-1] - 1;
			}
			else{
				d[i] = a[i] - b[i];
			}
		}
		for(int i = 0 ; i < s1.size(); i++){
			cout << d[i];
		}
		cout << endl;
	}
	return 0;
}
// code by Duong dep trai
