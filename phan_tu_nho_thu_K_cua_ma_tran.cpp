#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin  >> n >> k;
        int b[100000];
        int a[n*n+5];
        for(int  i = 0; i < n*n; i++){
            cin >> a[i];
        }
        sort(a,a+n*n);
        cout << a[k-1] << endl;

    }
    return 0;
}
//code by Duong