#include<string>
#include<iostream>
using namespace std;
 
int bang_nhau(string a) {
	int n = a.size(),i, dem = 0;
	for ( i = n-2; ;i-- ) {
		if ( i==n-3 ) continue;
		if ( dem==4 ) break;
		dem++;
		if ( a[i]!=a[n-1] )
			return 0;
	}
	return 1;
}
 
int ba_hai(string a) {
	int n = a.size();
	if ( a[n-1]==a[n-2] && ( a[n-6]==a[n-4] && a[n-6]==a[n-5] )) return 1;
	return 0;
}
 
int tang(string a) {
	int i, dem = 0;
	for (  i = a.size()-1; ; i--) {
		if (i==a.size()-3) continue;
		if ( dem==4 ) break;
		dem++;
		if ( a[i]<=a[i-1] ) 
			return 0;
	}
	return 1;
}
 
int loc_phat(string a) {
	int i, dem = 0;
	for (  i = a.size()-1; ; i--) {
		if (i==a.size()-3) continue;
		if ( dem==5 ) break;
		dem++;
		if ( a[i]=='6' || a[i]=='8' ) 
			continue;
		return 0;
	}
	return 1;
}
 
int main()
{
	int t;
    cin >> t;
    cin.ignore();
	while ( t-- ) {
		string s;
        cin >> s;
		if ( loc_phat(s)==1 || bang_nhau(s)==1 || ba_hai(s)==1 || tang(s)==1 ) 
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}