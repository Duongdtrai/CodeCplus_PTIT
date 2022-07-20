#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a;
        cin >> a;
        long long sum = 0;
        while(a > 0){
            long long  t = a%10;
            a = a/10;
            sum = sum + t;
        }
        long long sum2 = 0;
        while(sum > 0){
            long long k = sum%10;
            sum = sum / 10;
            sum2 = sum2 + k;
        }
        if(sum2 == 10){
            cout << "1" << endl;
        }
        else cout << sum2 <<endl;
    }
    return 0;
}