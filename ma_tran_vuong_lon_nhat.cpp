#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll M = 1000005;
char s[105][105];
int n;

int solve()
{
    int max = 0;
	
	int hor[n][n], ver[n][n];
	hor[0][0] = ver[0][0] = (s[0][0]=='X');
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(s[i][j]=='O'){
				ver[i][j] = hor[i][j] = 0;
			}
			else{
				hor[i][j] = (j==0) ? 1:hor[i][j-1]+1;
				ver[i][j] = (i==0) ? 1:ver[i-1][j]+1;
			}
		}
	}
    
    for(int i=n-1; i>=1; i--){
    	for(int j=n-1; j>=1; j--){
    		int small = min(hor[i][j], ver[i][j]);
    		while (small > max){
                if (ver[i][j - small + 1] >= small && hor[i - small + 1][j] >= small){
                    max = small;
                }
                small--;
            }
		}
	}
    
    return max;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int check;
	cin>>check;
	while(check--){
		cin>>n;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>s[i][j];
			}
		}

		cout<<solve()<<endl;
	}
}