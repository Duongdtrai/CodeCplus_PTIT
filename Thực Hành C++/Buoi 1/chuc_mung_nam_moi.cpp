#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
class Bye{
    public:
    string name;
};
void solve(Bye a[1000],vector<string>&s1, int &x){
    for(int i = 0 ;i < s1.size(); i++){
        int ok = 0;
        for(int j = 0; j < x; j++){
            if(s1[i] == a[j].name){
                ok = 1;
                break;
            }
        }
        if(ok == 0){
            a[x++].name = s1[i];
        }
    }
}
int main(){
    int t;
    cin >> t;
    vector<string>s1;
    Bye a[1000];
    int x = 0;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        s1.push_back(s);
    }
    solve(a,s1,x);
    cout << x << endl;
    return 0;
}
//code by Duong