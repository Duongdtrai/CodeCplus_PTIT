#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
class Handle{
private:
    ll n;
    ll p;
public:
    void nhap(){
        cin >> n >> p;
    }
    ll Xu_li(){
        ll count1 = 0;
        for(ll i = 1; i <= n; i++){
            if(i%p == 0){
                count1++;
                ll a = i;
                while(a > 0){
                    a = a/p;
                    if(a%p != 0){
                        break;
                    }
                    else if(a%p ==0) count1++;
                }
            }
        }
        return count1;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        Handle a;
        a.nhap();
        cout << a.Xu_li() << endl;
    }
    return 0;
}
//code by Duong