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
        int sum2 = 0;
        int count1 = 0;
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
            if(a[i] == 1){
                count1 = 1;
            }
        }
        sort(a,a+n);
        if(count1 == 0){
            cout << "1" << endl;
        }
        else{
            int ok = 0;
            for(int i = 0; i < n - 1; i++){
                if(a[i] > 0){
                    if(a[i+1] - a[i] > 1){
                        cout << a[i]+1 << endl;
                        ok = 1;
                        break;
                    }
                }
            }
            if(ok == 0){
                cout << n+1 << endl;
            }
        }
    }
    return 0;
}