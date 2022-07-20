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
        int n;
        cin >> n;
        cout << "1 ";
        for(int i = 2; i <= n ;i++){
            if(i%2 == 0){
                cout << "2 ";
            }
            else if(i%2 != 0){
                int ok = 0;
                for(int j = 3; j <= sqrt(i); j++){
                    if(i%j == 0){
                        cout << j << " ";
                        ok = 1;
                        break;
                    }
                }
                if(ok == 0) cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
//code by Duong