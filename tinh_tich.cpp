#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        vector<long long>a;
        vector<long long>b;
        for(int i = 0 ; i < m; i++){
            long long x;
            cin >> x;
            a.push_back(x);
        }       
        for(int i = 0 ; i < n; i++){
            long long y;
            cin >> y;
            b.push_back(y);
        }
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end());
        long long result = a[0] * b[0];
        cout << result << endl;
    }
    return 0;
}