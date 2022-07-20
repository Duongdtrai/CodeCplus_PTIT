#include<iostream>
typedef long long ll;
using namespace std;
class Handle{
private:
    ll n,k;
public:
    void Input(){
        cin >> n >> k;
    }
    ll Xu_li(){
        long long sum = 0;
        for(long long i = 0; i<= n; i++){
            sum = sum + i%k;
        }
        return sum;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        Handle a;
        a.Input();
        cout << a.Xu_li() << endl;
    }
    return 0;
}