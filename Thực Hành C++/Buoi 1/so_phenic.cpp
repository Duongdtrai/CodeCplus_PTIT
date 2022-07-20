#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
class Phenic{
private:
    int n;
public:
    void nhap(){
        cin >> n;
    }
    int Solve9(){
        int ok = 1;
        int count1 = 0;
        for(int i = 2; i <= sqrt(n); i++){
            int count2 = 0;
            while(n%i == 0){
                count1++;
                n = n/i;
                count2++;
                if(count2 == 2){
                    ok = 0;
                    break;
                }

            }
            if(ok == 0){
                break;
            }
        }
        if(n > 1){
             count1++;
        }
        if( ok == 1 && count1 == 3){
            return 1;
        }
        else return 0;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        Phenic res;
        res.nhap();
        cout << res.Solve9() << endl;
    }
    return 0;
}
//code by Duong