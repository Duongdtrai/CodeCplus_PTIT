#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int a[25];
bool stop = false;
void create(int k){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}
void xuat(int k){
    for(int i = 1; i <= k; i++){
        cout << a[i];
    }
    cout << " ";
}
void sinhToHop(int k, int n){
    int i = k;
    while(i > 0 && a[i] == n-k+i){ // 1 3 5
        i = i-1;
    }
    if(i <=0 ){
        stop = true;
    }
    else{
        a[i] = a[i] + 1;
        for(int j = i+1; j <=k; j++){
            a[j] = a[j-1]+1;
        }
    }
}
void out(int k, int n){
    create(k);
    while(!stop){
        xuat(k);
        sinhToHop(k,n);
    }
    stop = false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        out(k,n);
        cout << endl;
    }
    return 0;
}
//code by Duong