#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    // int t;
    // cin >> t;
    // while(t--){
        int n;
        cin >> n;
        int a[n*3+5][5];
        int countSum = 0;
        for(int i = 1 ; i <= n; i++){
            for(int j = 1; j <= 3; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 1; i <= n; i++){
            int count1 = 0;
            int count0 = 0;
            for(int j =1; j <= 3; j++){
                if(a[i][j] == 1){
                    count1++;
                }
                else count0++;
            }
            if(count1 > count0){
                countSum++;
            }
        }
        cout << countSum ;
    // }
    return 0;
}
//code by Duong