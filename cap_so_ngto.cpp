#include<iostream>
#include<cmath>
using namespace std;
int snt(int m){
    if(m < 2) return 0;
    for(int i = 2; i <= sqrt(m); i++){
        if(m%i == 0) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m;
        cin >> m;
        for(int i = 2; i <= m; i++){
            if(snt(i) == 1){
                int a = m - i;
                if(snt(a) == 1){
                    cout << i << " " << a << endl;
                    break;
                }
                else continue;
            }
        }
    }
    return 0;
} 