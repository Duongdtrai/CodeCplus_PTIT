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
       int a;
       cin >> a;
       int count = 0;
        for(int i = 1 ; i <= sqrt(a); i++){
                if(a%i == 0){
                    if(i%2 == 0){
                        count++;
                    }
                    if((a/i) != i && (a/i)%2 == 0 ){
                        count++;
                    }
                }
            }
            cout << count << endl;
    }
    return 0;
}
//code by Duong