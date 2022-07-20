#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
int snt(int m){
    if(m < 2) return 0;
    for(int i = 2; i <= sqrt(m); i++){
        if(m%i == 0) return 0;
    }
    return 1;
}
const int mod = 10e9+7;
int main(){
    int n;
    cin >> n;
    if(snt(n) == 1) cout << "YES";
    else cout << "NO";
    return 0;
}
//code by Duong