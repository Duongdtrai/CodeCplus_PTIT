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
        int ok = 1;
        int count1 = 0;
        for(int i = 2; i <= sqrt(n); i++){
            int count2 = 0;
            while(n%i == 0){
                count1++;
                n = n/i;
                count2++;
                if(count2 == 2){
                    ok = 0;
                    break;
                }

            }
            if(ok == 0){
                break;
            }
        }
        if(n > 1){
             count1++;
        }
        if( ok == 1 && count1 == 3){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
    }
    return 0;
}
//code by Duong