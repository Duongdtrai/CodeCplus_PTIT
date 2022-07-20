#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
void out(vector<int>a){
    for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        vector<int>a;
        for(int i = 0; i < m+n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        out(a);
    }
    return 0;
}