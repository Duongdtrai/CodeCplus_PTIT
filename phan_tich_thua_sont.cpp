#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int m;
        cin >> m;
        for(int i = 2; i <= sqrt(m); i++){
            int ok = 1;
            int dem = 0;
            while(m%i == 0){
                if(ok == 1){
                    cout << i <<" ";
                }
                m = m/i;
                dem++;
                ok = 0;
            }
            if(ok == 0){
                 cout << dem <<" ";
            }
           
        }
        if( m > 1 ){
            cout << m << " 1";
        }
        cout << endl;
    }
}