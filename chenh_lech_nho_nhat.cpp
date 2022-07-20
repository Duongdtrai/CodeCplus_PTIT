#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5];
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        int min = abs(a[0]-a[1]);
        sort(a,a+n);
        for(int i = 0; i<n; i++){
            if(min > abs(a[i]-a[i+1])){
                min = abs(a[i]-a[i+1]);
            }
        }
        cout << min << endl;
    }
    return 0;
}