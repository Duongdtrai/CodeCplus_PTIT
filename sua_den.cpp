#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,k,b;
    cin >> n >> k >> b;
    int a[n+5];
    for(int i = 1; i <= n; i++){
        a[i] = 1;
    }
    for(int i = 1; i <= b; i++){
        int x;
        cin >> x;
        a[x] = 0;
    }
    int ds = 0;
    for(int i = 1; i <= k; i++){
        ds = ds + a[i]; // số lượng đèn không hỏng
    }
    int dnh = k - ds; // số đèn bị hỏng
    for(int i = k + 1; i <= n ;i++){
        ds = ds + a[i]; // ds =ds + a[7];
        ds = ds - a[i-k]; // ds = ds -a[1]
        dnh = min(dnh,k - ds);
    }
    if(dnh < 0) cout << '0' << endl;
    else cout << dnh << endl;
    return 0;
}
//code by Duong