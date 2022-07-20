#include<iostream>
#include<cmath>
#include<vector>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
void Handle(vector<int>&b,vector<int>&a){
    for(int i = 2 ; i < 17; i++){
            int x = a[i-1] + a[i-2];
            a.push_back(x);
		}
		for(int i = 0 ; i < 1005; i++){
			b.push_back(0);
		}
		for(int i = 0 ; i < 17; i++){
			b[a[i]]++;
		}
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>c;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            c.push_back(x);
		}
		vector<int>b;
        vector<int>a;
        a.push_back(0);
        a.push_back(1);
        Handle(b,a);
		for(int i = 0 ; i < n; i++){
			if(b[c[i]] > 0){
				cout << c[i] << " ";
			}
		}
		cout << endl;
    }
    return 0;
}
