#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll M = 1000005;

string solve(string a, string x){
	int l1 = a.size();
	int l2 = x.size();
	
	if(l1<l2){
		return "-1";
	}
	
	int hash_pat[256]={0};
	int hash_str[256]={0};
	
	for(int i=0; i<l2; i++){
		hash_pat[x[i]]++;
	}
	
	int start=0, start_index=-1, min_len = INT_MAX;
	
	int count=0;
	for(int j=0; j<l1; j++){
		hash_str[a[j]]++;
		if(hash_str[a[j]]<=hash_pat[a[j]]){
			count++;
		}
		
		if(count==l2){
			while(hash_str[a[start]] > hash_pat[a[start]] || hash_pat[a[start]]==0){
				if(hash_str[a[start]] > hash_pat[a[start]]){
					hash_str[a[start]]--;
				}
				start++;
			}
			
			int len_window = j-start+1;
			if(min_len>len_window){
				min_len = len_window;
				start_index = start;
			}
		}
	}
	
	if(start_index==-1){
		return "-1";
	}
	else{
		return a.substr(start_index, min_len);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin>>test;
	while(test--){
		string a, x;
		cin>>a>>x;
		cout<<solve(a, x)<<endl;
	}
}