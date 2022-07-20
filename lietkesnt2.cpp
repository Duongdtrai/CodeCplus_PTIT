#include<iostream>
#include<cmath>
using namespace std;
int snt(int m){
    if(m < 2) return 0;
    for(int i = 2; i <= sqrt(m); i++){
        if(m%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        for(int i = m; i <= n; i++){
            if(snt(i) == 1){
                cout << i << " ";
            }
        }
        cout << endl;
    }
	return 0;
}