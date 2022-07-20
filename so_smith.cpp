#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int snt(int n){
    if(n<2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return 0;
    }
    return 1;
}
int Sum(int n){
    int sum = 0;
    while(n>0){
        int k = n%10;
        n = n/10;
        sum = sum+k;
    }
    return sum;
}
int SumNumberNgto(int n){
    int a[10000];
    int x = 0;
    for(int i = 2 ; i <=sqrt(n); i++){
        while(n%i == 0){
            a[x++] = i;
            n = n / i;
        }
    }
    if(n > 1){
        a[x++] = n;
    }
    int sum = 0;
    for(int i = 0; i < x; i++){
        if(a[i] < 10){
            sum = sum + a[i];
        }
        else{
            sum = sum + Sum(a[i]);
        }
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(snt(n) == 0 && SumNumberNgto(n) == Sum(n)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;

    }
    return 0;
}
//code by Duong