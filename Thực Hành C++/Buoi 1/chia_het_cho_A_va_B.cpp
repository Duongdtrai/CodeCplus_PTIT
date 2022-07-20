#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
class Handle{
private:
    ll m,n,a,b;
public:
    void nhap(){
        cin >> m >> n >> a >> b;
    }
    ll Xu_li(){
        ll count1 = 0;
        for(int i = m; i <= n; i++ ){
            if(i% a == 0 || i%b == 0) count1++;
        }
        return count1;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        Handle res;
        res.nhap();
        cout << res.Xu_li() << endl;
    }
    return 0;
}
//code by Duong