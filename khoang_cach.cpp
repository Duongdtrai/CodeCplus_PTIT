#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		double a[5];
		for (int i = 0; i < 4; i ++){
			cin >> a[i];
		}
        double x = sqrt((a[2] - a[0])*(a[2] - a[0]) + (a[3] - a[1])*(a[3] - a[1]))	;
        cout << fixed << setprecision(4) << x << endl;
	}
	return 0;
}
// code by Duong deptrai