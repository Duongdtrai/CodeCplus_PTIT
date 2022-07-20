#include<iostream>
#include<vector>
using namespace std;
class Handle{
private:
    int n;
    vector<int>a;
public:
    void Input(){
        cin >> n ;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
    }
    int Xu_li(){
        int max1 = a[0];
        for(int i = 0; i < a.size(); i++){
            max1 = max(a[i],max1);
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