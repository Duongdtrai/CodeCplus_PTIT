#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int b[n+5];
        int a[n+5];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int x = 0;
        int y = 0;
        int max1 = 1;
        int k = 0;
        for(int i = 0; i < n; i++){
            x = 0;
            y = 0;
            for(int j = i; j < n; j++){
                x = x+ a[j];
                y = y+ b[j];
                if(x == y){
                    k = j - i + 1;
                }
            }
            max1 = max(k,max1);
        }
        cout << max1 << endl;
    }
    return 0; 
}   