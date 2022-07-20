#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[1000];
	int b[1000];
	for (size_t i = 0; i < 1000; i++){
		b[i] = 0;
	}
	int max = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[a[i]]++;
		if(max < a[i])
			max = a[i];
	}
	int ok = 0;
	for(int i = 1; i <= max; i++){
		if(b[i] == 0){
			cout << i << endl;
			ok = 1;
		}
	}
	if(ok == 0){
		cout << "Excellent!";
	}
	return 0;
}
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n],b[1000]={0};
// 	int max=0;
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 		b[a[i]]++;
// 		if(max<a[i]) max=a[i];
// 	}
// 	int q=0;
// 	for(int i=1;i<=max;i++){
// 		if(b[i]==0) {
// 			cout<<i<<endl;
// 			q=1;
// 		}
// 	}
// 	if(q==0) cout<<"Excellent!";
// }
