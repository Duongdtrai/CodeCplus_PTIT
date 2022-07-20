#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
class Handle{
private:
    ll m,n;
    vector<int>a;

public:
    void Input(){
        cin >> m >> n;
        for(int i = 1; i <= m; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
    }
    void Xu_li(){
        while(n--){
            ll x,y;
            cin >> x >> y;
            ll sum = 0;
            for(int i = x-1; i <= y-1; i++){
                sum = sum + a[i];
            }
            cout << sum << endl;
        }
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