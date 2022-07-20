#include<bits/stdc++.h>
using namespace std;
string operator/(string a,int b){
	int index=0;
	int t=a[index]-'0';
	string kq="";
	while(t<b){
		t=t*10+a[++index]-'0';
	}
	while(a.length()>index){
		kq.push_back(t/b+'0');
		t=(t%b)*10+a[++index]-'0';
	}
	if(kq.length()==0) return 0;
	return kq;
}
string operator*(string a,string b){
	int n=a.length(),m=b.length(),temp=n+m-1;
	vector<int> v(n+m,0);
	for(int i=n-1;i>=0;i--){
		for(int j=m-1;j>=0;j--){
			v[i+j+1]+=(a[i]-'0')*(b[j]-'0');
		}
	}
	for(int i=n+m-1;i>=0;i--){
		if(v[i]>9){
			v[i-1]+=v[i]/10;
			v[i]%=10;
		}
	}
	for(int i=0;i<temp;i++){
		if(v[i]!=0){
			temp=i;break;
		}
	}
	string kq="";
	for(int i=temp;i<n+m;i++) kq.push_back(v[i]+'0');
	return kq;
}
main(){
	long long n;
	cin >> n;
	string L[10002];
	L[0]="1";
	for(int i=0;i<=n;i++){
		L[i+1]=(to_string(2*(2*i+1))*L[i])/(i+2);
	}
	cout << L[n+1] << endl;
}