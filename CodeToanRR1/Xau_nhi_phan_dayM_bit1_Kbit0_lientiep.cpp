#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int n;
int k;
int m;
vector<int>a;
bool check = true;
void Input(){
    cin >> k >> m >> n;
    for(int i = 1; i <= n; i++){
        a.push_back(0);
    }
}
void Out(){
    int dem = 0;
    int x = k;
    int y = m;
    for(int i = 0; i <= a.size()-k; i++){
        int mum = i;
        int count = 0;
        while(x--){
            if(a[mum] == 1){
                break;
            }
            mum++;
            count++;
        }
        if(count == k){
            dem++;
        }
        x = k;
    }
    int dem1 = 0;
    for(int i = 0; i <= a.size()-m; i++){
        int mum = i;
        int count = 0;
        while(y--){
            if(a[mum] == 0){
                break;
            }
            mum++;
            count++;
        }
        if(count == m){
            dem1++;
        }
        y = m;
    }
    if(dem == 1 && dem1 == 1){
        for(int i = 0; i <a.size(); i++){
            cout << a[i] << " ";
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

    Input();
    Solve();

    return 0;
}
//code by Duong