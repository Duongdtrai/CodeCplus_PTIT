#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a;
        for(long long i = 2; i <= sqrt(n); i++){
            while(n%i == 0){
                a.push_back(i);
                n = n/i;
            }
        }
        if(n > 1){
            cout << n;
        }
        else{
            cout << a.back();
        }
        cout << endl;
    }
	return 0;
}