#include<iostream>
#include<cmath>
using namespace std;
bool snt(int m){
    if(m<2) return false;
    for(int i = 2; i <= sqrt(m); i++){
        if(m%i == 0) return false;
    }
    return true;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        for(int i = 2; i <= a; i++){
            if(snt(i) == true && i*i <= a){
                cout << i*i << " ";
            }
            else if(i*i > a){
                break;
            }
        }
        cout << endl;
    }
    return 0;
}