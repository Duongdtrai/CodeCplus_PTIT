#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5];
        int result = 0;
        int d[1005] = {0};
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for (size_t i = 1; i <= n; i++)
        {
            d[i] = 1;
            for(int j = 1; j < i; j++){
                if(a[i] > a[j]){
                    d[i] = max(d[i],d[j]+1);
                }
            }
            result = max(result,d[i]);
        }
        cout << result << endl;
    }
    return 0;
}
//code by Duong