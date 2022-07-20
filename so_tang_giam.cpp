#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int snt(int n){
    if(n < 2){
        return 0; 
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i ==0) return 0;
    }
    return 1;
}
int Check_tang(int n){
    int a[15];
    int x = 0;
    while(n > 0){
        int k = n%10;
        n = n / 10;
        a[x++] = k;
    }
    for(int i = 0 ; i < x - 1; i++){
        if(a[i] <= a[i+1] ) return 0;
    }
    return 1;
}
int Check_giam(int n){
    int a[15];
    int x = 0;
    while(n > 0){
        int k = n%10;
        n = n / 10;
        a[x++] = k;
    }
    for(int i = 0 ; i < x - 1; i++){
        if(a[i] >= a[i+1] ) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        int start = pow(10,a-1);
        int end = pow(10,a);
        int count = 0;
        for(int i = start+1; i < end - 1; i = i+2){
            if( (Check_giam(i) == 1 || Check_tang(i) == 1) && snt(i) == 1){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
//code by Duong