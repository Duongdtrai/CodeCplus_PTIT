#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;

class Handle{
private:
    ll a,b,c;
public:
    void Input(){
        cin >> a >> b>> c;
    }
    void Xu_li(){
        ll x = __gcd(b,c);
        while(x--){
            cout << a;
        }
        cout << endl;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        Handle res;
        res.Input();
        res.Xu_li();
    }
    return 0;
}