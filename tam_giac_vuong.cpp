#include<bits/stdc++.h>
using namespace std;
 
void display(long long a[5005],long long n){
	for(long long i = 0; i < n-1;i++){
		for(long long j = i+1; j< n;j++){
			if(a[i] > a[j]){
				long long t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
 
	int ok = 0;       // 1 3 3 4 5 6
	for(long long i = 0; i < n-1;i++ ){ 
		for(long long j = i+1; j < n;j++){ 
			long long h = a[i]*a[i]+a[j]*a[j];
        	long long p = sqrt(a[i]*a[i]+a[j]*a[j]);
			if(p*p==h){       
        	for(int k=j+1;k<n;++k) {
       	 		if(h == a[k]*a[k]){
       	 			ok++;
       	 			if(ok==1) cout << "YES" << endl;
       	 			break;
				}
			}
			if(ok > 0) break;
		}
		if(ok > 0) break;
	}
}
	if(ok == 0){
		cout << "NO" << endl;
	}
}
int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[5005];
		for(long long i = 0 ; i < n;i++){
			cin >> a[i];
		}
		display(a,n);
	}
	return 0;
}