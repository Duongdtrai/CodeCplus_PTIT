#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double a[n+5];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort (a, a+n);
    int p = 0, q = 0;
    for (int i = 1; i < n-1; i++){
        if (a[i] != a[0]){
            p = i;
            break;
        }
    }
    for (int i = n-2; i > 0; i--){
        if (a[i] != a[n-1]){
            q = i;
            break;
        }
    }
    double sum = 0;
    for (int i = p; i <= q; i++){
        sum += a[i];
    }
    int k = q-p+1;
    double res = (float)sum/k;
    cout << fixed << setprecision(2) << res;
    return 0;
}