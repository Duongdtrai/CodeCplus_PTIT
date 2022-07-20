#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int n;
int a[10009];
void Input(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
}

void Solve(){
    int t = n;
    int ok = 1;
    int pos;
    while(t - 1 >= 1){
        if(a[t-1] > a[t]){
            ok = 0;
            pos = t-1;
            break;
        }
        else{
            t--;
        }
    }
        vector<int>arr;
        int x = a[pos];
        for(int i = pos+1; i <= n; i++){
            arr.push_back(a[i]);
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int size = 0;
        for(int i = pos+1; i <= n; i++){
            a[i] = arr[size++];
        }
        for(int i = pos+1; i <= n; i++){
            if(a[i] < a[pos]){
                swap(a[i],a[pos]);
                break;
            }
        }
    for(int i = 1; i <= n; i++){
        cout << a[i]  << " ";
    }
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