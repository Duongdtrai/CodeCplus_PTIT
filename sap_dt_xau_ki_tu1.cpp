#include<iostream>
#include<cmath>
#include<algorithm>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
string s;
void Input(){
    cin >> s;
}
void Solve(){
    int n = s.size();
    int danhdau[n+5];
    for(int i = 0; i < n; i++ ){
        danhdau[i] = 1;
    }
    int max = 0;
    for(int i = 0; i < n; i++){
        if(danhdau[i] == 1){
            for(int j = i + 1; j < n; j++){
                if(s[i] == s[j]){
                    danhdau[i]++;
                }
                if(max < danhdau[i]) max = danhdau[i];
            }
        }
    }
    int x;
    if(n%2 == 0){
        x = n/2;
    }
    else x = n/2 +1;
    if(max <= x) cout << "1" << endl;
    else cout << "0" << endl;
}
int main(){
    IOS()
    int test;
    cin >> test;
    cin.ignore();
    while(test--){
        Input();
        Solve();
    }
    return 0;
}
//code by Duong