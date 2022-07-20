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
        int x = 0;
        int y = 0;
        int c[500][1000];
        int max = 0;
        for(int i = 0 ; i < s.size(); i++){
            if( '0'<=s[i] && s[i] <= '9'){
                c[x][y++] = (int)(s[i]-48);
            }
            else{
                int sum = 0;
                int k = pow(10,y-1);
                for(int j = 0; j < y; j++){
                    sum = sum + c[x][j]*k;
                    k = k / 10;
                }
                if(max < sum){
                    max = sum;
                }
                x++;
                y = 0;
            }
        }
        cout << max << endl;

    }
    return 0;
}
//code by Duong