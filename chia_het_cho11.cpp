#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
class Hadle{
private:
    string s;
public:
    void Input(){
        cin >> s;
    }
    int Solve(){
        ll sum = 0;
        for(int i = 0 ; i < s.size(); i++){
            int x = s[i]-48;
            if(i%2 == 0){
                sum = sum + x;
            }
            else sum = sum - x;
        }
        if(sum%11 == 0) return 1;
        else return 0;
    }

};

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        Hadle a;
        a.Input();
        cout << a.Solve();
        cout << endl;
    }
    return 0;
}
//code by Duong