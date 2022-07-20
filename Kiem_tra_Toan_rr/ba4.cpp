#include<bits/stdc++.h>
using namespace std;
int main(){
    int dem = 0;
    for(int i = 4000; i <= 5000; i++){
        if(i%2 != 0 && i % 5 != 0 && i%15 != 0){
            // cout << i << endl;
            dem++;
        }
    }
    cout << dem << endl;
    // int size = 0;
    // for(int i = 4005; i <= 5000; i+=15){
    //     if(i%2 == 0 && i % 5 == 0 && i%15 == 0){
    //         cout << i << " ";
    //         size++;
    //     }
    //     if(size == 10){
    //         size = 0;
    //         cout << endl;
    //     }
    // }
    return 0;
}