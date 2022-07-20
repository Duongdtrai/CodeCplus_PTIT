#include<bits/stdc++.h>
using namespace std;
int check[1000005];
int main(){
	int t;
	cin >> t;
	while (t--){
		for (int i = 0; i < 1000005; i++){
			check[i] = 0;
		}
		int n;
		cin >> n;
		int a[n+5];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int b[n+5];
		int k = 0;
		for (int i = 0; i < n; i++){
			b[k++] = a[i];
		}
		sort(b, b+k);
		int Max = b[k-1];
		int c[n+5];
		int q = 0;
		for (int i = 0; i < n; i++){
			if (a[i] == Max){
				c[q++] = i;
			}
		}
		for (int i = 0;i < k; i++){
			check[b[i]] = i;
		}
		for (int i = 0; i < n; i++){
			if (a[i] != Max){
				a[i] = b[check[a[i]] + 1];
			}
		}
		for (int i = 0; i < n; i++){
			int ok = 0;
			for (int j = 0; j < q; j++){
				if (i == c[j]){
					ok = 1;
					break;
				}
			}
			if (ok == 1) cout <<"_" <<" ";
			else cout << a[i] <<" ";
		}
		cout << endl;
	}
	return 0;
}
