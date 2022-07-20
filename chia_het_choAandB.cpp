#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll m,n,a,b;
        cin >> m >> n >> a >> b;
        ll count1 = 0;
        for(int i = m; i <= n; i++ ){
            if(i% a == 0 || i%b == 0) count1++;
        }
        cout << count1 << endl;
    }
    return 0;
}
//code by Duong