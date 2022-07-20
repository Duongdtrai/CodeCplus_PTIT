#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    int n;
    cin >> n;
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + (double)1/i;
    }
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}
//code by Duong