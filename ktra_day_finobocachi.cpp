#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c[n+5];
        for(int i = 0; i < n; i++){
        	cin >> c[i];
		}
		int b[1005];
		int a[150];
		a[0] = 0;
		a[1] = 1;
		for(int i = 2 ; i < 17; i++){
			a[i] = a[i-1] + a[i-2];
		}
		for(int i = 0 ; i < 1005; i++){
			b[i] = 0;
		}
		for(int i = 0 ; i < 17; i++){
			b[a[i]]++;
		}
		for(int i = 0 ; i < n; i++){
			if(b[c[i]] > 0){
				cout << c[i] << " ";
			}
		}
		cout << endl;
    }
    return 0;
}
