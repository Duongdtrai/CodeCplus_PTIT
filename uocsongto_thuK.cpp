#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,k;
        cin >> m >> k;
        vector<int>a;
        for(int i = 2; i <= sqrt(m); i++){
            while(m%i == 0){
                a.push_back(i);
                m = m/i;
            }
        }
        if( m > 1 ){
            a.push_back(m);
        }
        if(k > a.size()){
            cout << "-1" << endl;
        }
        else{
            cout << a[k - 1] << endl;
        }
    }
    return 0;
}