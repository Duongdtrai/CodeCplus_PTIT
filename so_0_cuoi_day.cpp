#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long>a;
        long long count = 0;
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            if(x != 0){
                a.push_back(x);
            }
            else count++;
        }
        for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
         while(count--){
            cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}