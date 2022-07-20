#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a,m;
        cin >> a >> m;
        int count = 0;
        for(int i = 0; i < m; i++){
            int k = i*a;
            if(k % m == 1){
                count = 1;
               cout << i << endl;
               break;
            }
        }
        if(count == 0){
            cout << "-1" << endl;
        }
    }
    return 0;
}