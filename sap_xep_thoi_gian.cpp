#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
struct time{
    int hour;
    int minutes;
    int giay;
};

int main(){
    int n;
    cin >> n;
    struct time a[5000];
    for(int i = 0; i < n; i++){
        cin >> a[i].hour >> a[i].minutes >> a[i].giay;
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i].hour > a[j].hour){
                struct time t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i].minutes > a[j].minutes && a[i].hour == a[j].hour){
                struct time t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i].giay > a[j].giay && a[i].hour == a[j].hour && a[i].minutes == a[j].minutes){
                struct time t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(int i = 0 ; i < n; i++){
        cout << a[i].hour << " " << a[i].minutes << " " << a[i].giay << endl;
    }
    return 0;
}
//code by Duong