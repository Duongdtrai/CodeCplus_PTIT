#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
int ktra(double ab,double ac,double bc){
	if(ab < ac+bc && ac < bc + ab && bc < ac + ab){
		return 1;
	}
	else return 0;
}
double canh(double x1,double y1,double x2,double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
double dientich(double ab, double bc,double ac){
	return (sqrt((ab+bc+ac)*(ab+bc-ac)*(ab-bc+ac)*(bc-ab+ac)))/4;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		double a1,b1;
		double a2,b2;
		double a3,b3;
        cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
		double ab =	canh(a1,b1,a2,b2);
		double ac = canh(a3,b3,a1,b1);
		double bc = canh(a2,b2,a3,b3);
		if(ktra(ab,ac,bc) == 1){
			double S = dientich(ab,bc,ac);
			double R = (ab*ac*bc)/(4*S);
			double S2 = PI*R*R;
            cout << fixed << setprecision(3) << S2 << endl;
		}	
		else cout << "INVALID" << endl;
	}
	return 0;
}
// code by Duong dep trai
