#include<iostream>
#include<cmath>
using namespace std;
long long power(long long a, long long b, long long c){
    if(b == 0) return 1;
    if(b == 1) return a;
    int x = power(a,b/2,c);
    if(b%2 == 1) return ((((x%c)*x)%c)*a)%c;
    return ((x%c)*x)%c; 
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;
        cout << power(a,b,c) << endl;
    }
    return 0;
}