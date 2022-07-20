#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int check(int m){
    int even = 0;
    int odd = 0;
    int dem = 0;
    while(m > 0){
        int k = m%10;
        m = m/10;
        dem++;
        if(k%2 == 0) even++;
        else odd++;
    }
    if(even == odd && dem%2 == 0) return 1;
    else return 0;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    int count = 0;
    for(int i = pow(10,n-1); i < pow(10,n); i++){
        if(check(i) == 1){
            cout << i << " ";
            count++;
        }
        if(count == 10){
            count = 0;
            cout << endl;
        }
    }
    return 0;
}
//code by Duong