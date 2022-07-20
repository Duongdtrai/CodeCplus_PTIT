#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,x;
        cin >> m >> x;
        int a[m+5];
        int count = 0;
        for(int i = 0; i < m; i++){
            cin >> a[i];
            if(a[i] == x){
                count++;
            }
        }
        if(count == 0){
            cout << "-1" << endl;
        }
        else cout << count << endl;
    }
    return 0;
}