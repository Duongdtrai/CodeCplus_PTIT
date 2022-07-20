#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
// thỏa mãn nguyên tố cùng nhau có ucln là 1;
int snt(int n){
    if(n < 2){
        return 0; 
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i ==0) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int count1 = 0;
        for(int i = 1; i <= x; i++){
            if(__gcd(i,x) == 1){
                count1++;
            }
        }
        cout << snt(count1) << endl;
    }
    return 0;
}
//code by Duong