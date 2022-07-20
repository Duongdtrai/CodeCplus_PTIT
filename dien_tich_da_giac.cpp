#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
double handle(int a[],int b[],int k,int n){
    double sum = 0;
    for(int i = 1;i <= n; i++){
        sum  = sum  + (a[i]+a[k])*(b[k]-b[i]); 
        k = i;
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[1005];
        int b[1005];
        for(int i = 1; i <= n; i++){
            cin >> a[i] >> b[i];
        }
        int k = n;
        double sum = handle(a,b,k,n);
        cout << fixed << setprecision(3) << abs(sum/2) << endl;
    }
    return 0;
}
//code by Duong