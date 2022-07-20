#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int snt(int a){
    if(a< 2) return 0;
    for(int i = 2; i <= sqrt(a); i++){
        if(a%i == 0) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
       int L,R;
       cin >> L >> R;
       int count1 = 0;
       for(int i = L; i <= R; i++){
           if(snt(i) == 1) count1++;
       }
       cout << count1 << endl;
    }
    return 0;
}
//code by Duong