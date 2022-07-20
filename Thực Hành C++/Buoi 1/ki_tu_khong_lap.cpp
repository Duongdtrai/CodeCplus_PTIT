#include<iostream>
#include<cmath>
#include<string>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
class ki_tu{
    public:
    char kitu;
    ll lan;
};
void Handle(ki_tu a[],string s){
    ll size = 0;
    for(int i = 0 ; i < s.size(); i++){
            ll ok = 0;
            for(int j = 0; j < size; j++){
                if(s[i] == a[j].kitu){
                    a[j].lan++;
                    ok = 1;
                    break;
                }
            }
            if(ok == 0){
                a[size].kitu = s[i];
                a[size].lan = 1;
                size++;
            }
        }
        for(int i = 0 ; i < size; i++){
            if(a[i].lan == 1){
                cout << a[i].kitu;
            }
        }
        cout << endl;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        ki_tu a[100000];
        string s;
        cin >> s;
        Handle(a,s);

    }
    return 0;
}