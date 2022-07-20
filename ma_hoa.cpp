#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
class Count{
public:
    char Ki_Tu;
    int lan;
};
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        Count a[105];
        int x = 0;
        for(int i = 0 ; i < s.size(); i++){
            int ok = 0;
            for(int j = 0; j < x; j++){
                if(a[j].Ki_Tu == s[i]){
                    ok = 1;
                    a[j].lan++;
                }
            }
            if(ok == 0){
                a[x].Ki_Tu = s[i];
                a[x].lan = 1;
                x++;
            }
        }
        for(int i = 0 ; i < x; i++){
            cout << a[i].Ki_Tu << a[i].lan;
        }
        cout << endl;
    }
    return 0;
}
//code by Duong