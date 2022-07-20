#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
struct danhdau{
    ll number;
    int lan = 0;
};

int main(){
    ll n;
    danhdau a[10000];
    int size = 0;
    while (cin >> n){
        int ok = 0;
        for(int i = 0 ; i < size; i++){
            if(a[i].number == n){
                ok = 1;
                a[i].lan++;
                break;
            }
        }
        if(ok == 0){
            a[size].number = n;
            a[size].lan = 1;
            size++;
        }
    }
    for(int i = 0; i < size; i++){
        cout << a[i].number << " " << a[i].lan << endl;
    }
    return 0;
}
//code by Duong