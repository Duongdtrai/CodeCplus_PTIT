#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
class Handle{
private:
    ll n;
    vector<int>a;

public:
    void Input(){
        cin >> n;
        for(int i = 0; i <n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
    }
    ll Xu_li(){
        int max1 = 0;
        for(int i = 0; i <n; i++){
            int ok = 0;
            for(int j = n-1 ; j > i; j--){
                if(a[j] > a[i]){
                    if(max1 < j-i){
                        max1 = max(max1,j - i);
                    }
                    break;
                }
            }
        }
        return max1;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        Handle res;
        res.Input();
        cout << res.Xu_li() << endl;
    }
    return 0;
}
//code by Duong