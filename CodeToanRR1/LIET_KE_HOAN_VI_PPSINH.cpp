#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int n;
int a[10009];
bool check = true;
void Input(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}
void out(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << " ";
}
void sinh(){
    int t = n;
    int ok = 1;
    int pos;
    while(t - 1 >= 1){
        if(a[t-1] < a[t]){
            ok = 0;
            pos = t-1;
            break;
        }
        else{
            t--;
        }
    }
    if(ok == 1){
        check = false;
    }
    else{
        vector<int>arr;
        int x = a[pos];
        for(int i = pos+1; i <= n; i++){
            arr.push_back(a[i]);
        }
        sort(arr.begin(),arr.end());
        int size = 0;
        for(int i = pos+1; i <= n; i++){
            a[i] = arr[size++];
        }
        for(int i = pos+1; i <= n; i++){
            if(a[i] > a[pos]){
                swap(a[i],a[pos]);
                break;
            }
        }
    }
}
void Solve(){
    while(check == true){
        out();
        sinh();
    }
    check = true;
}
int main(){
    // IOS()
    int test;
    cin >> test;
    while(test--){
        Input();
        Solve();
        cout << endl;
    }
    return 0;
}
//code by Duong

//Bước 1: tim vị trí sao cho a[t-1] < a[t];
//Bước 2: sắp xếp từ bé đến lớn và đưa vào từ i = t cho đến i = n
// Bước 3: hoán đổi vị trí a[t-1] với vị trí i từ t -> n với điều kiện a[t-1] < a[i]. Sau khi swap thì break;