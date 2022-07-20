#include <bits/stdc++.h>
using namespace std;
int main(){
    int z;
    cin>>z;
    while(z--){
    	int m,n,i,j;
    	cin>>m>>n;
    	int a[m][n],b[9];
    	long long s=0;
    	for(i=0;i<m;++i) for(j=0;j<n;++j) cin>>a[i][j];
    	for(i=0;i<9;++i) cin>>b[i];
    	for(i=0;i<=m-3;++i) 
        	for(j=0;j<=n-3;++j) {
        		s+=b[0]*a[i][j]+b[1]*a[i][j+1]+b[2]*a[i][j+2]+b[3]*a[i+1][j]+b[4]*a[i+1][j+1]+b[5]*a[i+1][j+2]+b[6]*a[i+2][j]
        		+b[7]*a[i+2][j+1]+b[8]*a[i+2][j+2];
    		}
		cout<<s<<endl;
	}
}