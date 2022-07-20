#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Handle{
private:
    int n,k;
    vector<int>a;
public:
    void Input(){
        cin >> n  >> k;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
    }
    void Xu_li(){
        sort(a.begin(),a.end());
        cout << a[k-1] << endl;
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