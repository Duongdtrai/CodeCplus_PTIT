#include<iostream>
#include<cmath>
#include<algorithm>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int k,n;
int a[25];
void Input(){
    cin >> k >> n;
    for(int i = 0 ; i <= k; i++){
        a[i] = i;
    }
}
void Output(){
    for(int i = 1 ; i <= k; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void tohop(int i){
    for(int j = a[i-1]+1 ; j <= n - k +i; j++){ // i == 3, a[3] = 3 // 5-3+3
        a[i] = j;
        if(i == k){
            Output();
        }
        else{
            tohop(i+1);
        }
    }
}
int main(){
    Input();
    tohop(1);
    return 0;
}
//code by Duong