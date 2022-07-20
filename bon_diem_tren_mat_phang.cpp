#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int handling(int a1,int a2,int a3,int b1,int b2,int b3,int c1,int c2,int c3,int d1,int d2,int d3){
    int xAB = b1-a1; 
    int yAB = b2-a2; 
    int zAB = b3-a3; 
    int xAC = c1-a1; 
    int yAC = c2-a2;
    int zAC = c3-a3;
    int xhuong = (yAB * zAC) - (yAC*zAB);
    int yhuong = (zAB*xAC)-(xAB*zAC);
    int zhuong = (xAB*yAC)-(yAB*xAC);
    int Result = xhuong*(d1-c1) + yhuong*(d2-c2) + zhuong*(d3-c3);
    return Result;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> c1 >> c2 >> c3 >> d1 >> d2 >> d3;
        if(handling(a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3) == 0){
            cout << "YES" << endl;
        } 
        else cout << "NO" << endl;
    }
    return 0;
}
//code by Duong