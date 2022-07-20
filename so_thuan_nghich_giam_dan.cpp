#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
struct STN{
    string number;
    int lan;
};
void sort_STN(int x,struct STN a[]){
    for(int i = 0; i < x-1; i++ ){
        for(int j = i+1; j < x; j++){
            if(a[i].number.size() < a[j].number.size()){
                struct STN t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(int i = 0; i < x-1; i++ ){
        for(int j = i+1; j < x; j++){
            if(a[i].number.size() == a[j].number.size() && a[i].number < a[j].number){
                struct STN t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
int main(){
    string s[2005];
    int size = 0;
    while(cin >> s[size]){
        if(s[size] == "?"){
            break;
        }
        size++;
    }
    int x = 0;
    struct STN a[2005];
    for(int i = 0; i < size; i++){
        string m = s[i];
        string n = s[i];
        reverse(n.begin(), n.end());
        if(m == n){
            int ok = 0;
            for(int j = 0; j < x ;j++){
                if(a[j].number == s[i]){
                    a[j].lan++;
                    ok = 1;
                    break;
                }
            }
            if(ok == 0){
                a[x].number = s[i];
                a[x].lan = 1;
                x++;
            }
        }
        else continue;
    }
    sort_STN(x,a);
    for(int i = 0; i < x; i++ ){
        if(a[i].number.size() > 2){
            cout << a[i].number << " " << a[i].lan << endl;
        }
    }
    return 0;
}
//code by Duong