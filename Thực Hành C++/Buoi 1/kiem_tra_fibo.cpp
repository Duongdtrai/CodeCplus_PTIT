#include<iostream>
#include<cmath>
#include<vector>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
class Handle{
private:
    ll n;
public:
    void Input(){
        cin>>n;
    }
    int Xu_li(){
		vector<ll>a;
        a.push_back(0);
        a.push_back(1);
        if(n == a[0] || n == a[1]){
           return 1;
        }
        else{
            for(int i = 2; i < 100000; i++){
                ll x = a[i-1] + a[i-2];
                a.push_back(x);
                if(a[i] > n){
                    return 0;
                }
                else if(a[i] == n){
                    return 1;
                }
                else continue;
            }
        }
    }
    
};
int main(){
    int t;
    cin >> t;
    while(t--){
        Handle res;
        res.Input();
        if(res.Xu_li() == 1){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
        
    }
    return 0;
}