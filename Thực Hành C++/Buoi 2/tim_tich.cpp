#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int m,n;
vector<long long>a;
vector<long long>b;
void input(){
    cin >> m >> n;
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
}
void output(){
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end());
    long long result = a[0] * b[0];
    cout << result << endl;
    a.clear();
    b.clear();
}
int main(){
    int t;
    cin >> t;
    while(t--){
       input();
       output();
    }
    return 0;
}