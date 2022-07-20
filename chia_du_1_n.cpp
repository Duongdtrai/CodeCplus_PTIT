#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        long long sum = 0;
        for(long long i = 0; i<= n; i++){
            sum = sum + i%k;
        }
        cout << sum << endl;
    }
    return 0;
}