#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

void solve() {
	int n,m;
	cin>>n>>m;
	int a[n+3], dem[12], res[12], k = 0;
	memset(dem,0,sizeof(dem));
	for(int i=0 ; i<n ; i++) {
		cin>>a[i];
		dem[a[i]]++;
	}
	for(int i=1 ; i<10 ; i++) {
		if(dem[i] != 0) res[k++] = dem[i];
	}
	sort(res,res+k);
	int max1 = res[k-1];
	int max2 = -1, demNT2 = 0, check = 0;
	for(int i=k-2 ; i>=0 ; i--) {
		if( res[i] < max1) {
			max2 = res[i];
			check = 1;
			break;
		}
	}
	if( check == 0 ) {
		cout<<"NONE"<<endl;
		return;
	}
	
	for(int i=1 ; i<10 ; i++) {
		if( dem[i] == max2 ) {
			cout<<i<<endl;
			return;
		}
	}
		
}

int main()
{
	solve();
	return 0;
}