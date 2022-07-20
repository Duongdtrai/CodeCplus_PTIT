#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
string s1,s2;

void Input(){
    cin >> s1 >> s2;
}
void Solve(){
    int a[s1.size()+s2.size()];
    for(int i = 0; i < s1.size()+s2.size(); i++){
        a[i] = 0;
    }
    for(int i = s1.size()-1 ; i >= 0; i--){
        for(int j = s2.size()-1; j >= 0; j--){
            a[i+j+1] += (s1[i]-48) * (s2[j] - 48);
        }
    }
    for(int i = s1.size()+s2.size()-1; i > 0; i--){
        if(a[i] > 9){
            a[i-1] = a[i-1]+ a[i]/10;
            a[i] = a[i] %10;
        }
    }
    int k;
    for(int i = 0; i < s1.size()+s2.size() ; i++){
        if(a[i] != 0){
            k = i;
            break;
        }
    }
    for(int i = k; i < s1.size()+s2.size() ; i++){
        cout << a[i];
    }
    cout << endl;
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