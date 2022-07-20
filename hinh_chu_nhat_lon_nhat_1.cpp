#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll M = 1000005;

int maxArea(vector<vector<int > > a){
	int n = a.size();
	int m = a[0].size();
    int hist[n+1][m+1];
    
	for(int i=0; i<m; i++){
		hist[0][i]=a[0][i];
		for(int j=1; j<n; j++){
			hist[j][i] = (a[j][i]==0) ? 0 : hist[j-1][i]+1;
		}
	}
	
	for(int i=0; i<n; i++){
		int count[n+1]={0};
		for(int j=0; j<m; j++){
			count[hist[i][j]]++;
		}
		
		int col_no=0;
		for(int j=n; j>=0; j--){
			if(count[j]>0){
				for(int k=0; k<count[j]; k++){
					hist[i][col_no] = j;
					col_no++;
				}
			}
		}
	}
	
	int curr, max=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			curr = (j+1)*hist[i][j];
			if(curr>max){
				max = curr;
			}
		}
	}
	
	return max;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		vector<vector<int>> a(n, vector<int>(m));
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>a[i][j];
			}
		}
		
		cout<<maxArea(a)<<endl;
	}
}