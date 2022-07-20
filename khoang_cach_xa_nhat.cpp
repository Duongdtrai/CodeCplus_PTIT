#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n+5];
        for(int i = 0; i <n; i++){
            cin >> a[i];
        }
        int Max = 0;
        for(int i = 0; i <n; i++){
            int ok = 0;
            for(int j = n-1 ; j > i; j--){
                if(a[j] > a[i]){
                    if(Max < j-i){
                        Max = j - i;
                        break;
                    }
                    
                }
                
            }
        }
        cout << Max << endl;
    }
    return 0;
}
//code by Duong