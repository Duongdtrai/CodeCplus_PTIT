#include<iostream>
#include<cmath>
#include<algorithm>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int n;
int a[100005];
void Input(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
void Solve(){
    if(n == 1 || n == 0) cout << "0" << endl;
    else{
        sort(a,a+n);
        int max1 = a[n-1];
        int count1 = 1;
        int dem = 1;
        for(int i = 2; i <= max1; i++){
            int k = a[0] % i;
            for(int j = 1; j < n; j++){
                if(a[j] % i == k){
                    dem++;
                }
                else break;
            }
            if(dem == n){ 
                count1++;
            }
            dem = 1;
        }
        cout << count1 << endl;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        Input();
        Solve();
    }
    return 0;
}
//code by Duong