#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        ll sum = 0;
        for(int i = 0 ; i < s.size(); i++){
            int x = (int)(s[i]-48);
            sum = sum + x;
        }
        if(sum < 9){
            cout << "0" << endl;
        }
        else if(sum == 9){
            cout << "1" << endl;
        }
        else{
            ll sum1 = 0;
            while(sum > 0){
                ll k = sum %10;
                sum = sum / 10;
                sum1 = sum1 + k;
            }
            if(sum1 >= 10){
                ll sum2 = 0;
                while(sum1 > 0){
                    ll j = sum1 %10;
                    sum1 = sum1 / 10;
                    sum2 = sum2 + j;
                }
                if(sum2 == 9) cout << "1" << endl;
                else cout << "0" << endl;
            }
            else if(sum1 < 10){
                if(sum1 == 9) cout << "1" << endl;
                else cout << "0" << endl;
            }
        }
    }
    return 0;
}
//code by Duong