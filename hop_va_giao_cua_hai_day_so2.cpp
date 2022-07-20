#include<iostream>
#include<cmath>
#include<algorithm>
#include<set>
#include<vector>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int>a;
        vector<int>b;
        set<int>Union;
        set<int>Inter;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
            Union.insert(x);
        }
        for(int i = 0 ;i <m ;i++ ){
            int y;
            cin >> y;
            b.push_back(y);
            Union.insert(y);
        }
        vector<int>c;
        for(int i = 0; i < a.size(); i++){
            for(int j = 0; j < b.size(); j++){
                if(a[i] == b[j]){
                    Inter.insert(a[i]);
                    break;
                }
            }
        }
        for (set<int>:: iterator it = Union.begin(); it != Union.end(); it++){
                cout<< *it << " ";
        }
        cout << endl;
        for (set<int>:: iterator it = Inter.begin(); it != Inter.end(); it++){
                cout<< *it << " ";
        }
        cout << endl;
    }
    return 0;
}
//code by Duong