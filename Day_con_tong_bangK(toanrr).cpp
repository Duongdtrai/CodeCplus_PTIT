#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int n,k;
vector<int>a;
vector<int>b;
bool check = true;
void Input(){
    cin >> k >> n;
    for(int i = 1; i <= n; i++){
        int in;
        cin >> in;
        b.push_back(in);
        a.push_back(0);
    }
}
void Out(){
    int sum = 0;
    for(int i = 0; i < b.size(); i++){
        sum = sum + a[i]*b[i] ;
    }
    if(sum == k){
        for(int i = 0; i < b.size(); i++){
            if(a[i] == 1){
                cout << b[i] << " ";
            }
        }
        cout << endl;
    }
}
void Handle(){
    int k = n-1;
    while(k >= 0){
        if(a[k] == 0){
            a[k] = 1;
            break;
        }    
        else{
            a[k] = 0;
            k--;
        }
    }
    if(k < 0){
        check = false;
    }
}
void Solve(){
    while(check == true){
        Out();
        Handle();
    }
    a.clear();

    check = true;
}
int main(){
    IOS()
    int test;
    cin >> test;
    while(test--){
        Input();
        Solve();
    }
    return 0;
}
//code by Duong