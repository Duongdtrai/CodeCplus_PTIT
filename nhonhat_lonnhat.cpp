#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    // int t;
    // cin >> t;
    // while(t--){
       int m,s;
       cin >> m >> s;
       if(m == 1 ){
           if(s <= 9){
               cout << s << " " << s;
           }
           else {
               cout << "-1 -1";
           }
       }
       else{
            string ln = "";
            string nn = "";
            for(int i = 0; i < m ;i++){
                ln = ln + '0';
                nn = nn + '0';
            }
            int sum = 0;
            int ok = 0;
            int ok2 = 1;
            int k;
            for(int i = 0; i < m; i++){ // 9 0 0
                int x = 9;
                while(x >= 0){
                    sum = sum + x;
                    if(sum < s){
                        ln[i] = (char)(x+48);
                        break;
                    }
                    else if(sum == s){
                        ln[i] = (char)(x+48);
                        ok = 1;
                        break;
                    }
                    else if(sum > s){
                        sum = sum - x; // sum = 9; x = 6
                        x--;
                    }
                }
                if(ln[0] == '0'){
                    ok2 = 0;
                    break;
                }
                if(ok == 1){
                    break;
                }
            }
            if(ok2 == 0) cout << "-1 -1";
            else{
                sum = 0;
                ok = 0;
                for(int i = m- 1; i >= 0; i--){
                    int x = 9;
                    while(x >= 0){
                        sum = sum+x;
                        if(sum < s){
                            nn[i]= (char)(x+48);  // 0 0 9
                            break;
                        }
                        else if(sum == s){
                            nn[i] = (char)(x+48);
                            ok = 1;
                            break;
                        }
                        else if(sum > s){
                            sum = sum - x; // sum = 9;
                            x--; // x = 6;
                        }
                    }
                    if(ok == 1 && i > 0){
                        x = x - 1;
                        nn[i] = (char)(x+48);
                        break;
                    }
                }
                if(ok == 1){
                    for(int i = 0 ; i < m; i++){
                        if(i == 0 && nn[i] == '0') cout << "1";
                        else cout << nn[i];
                    }
                    cout << " ";
                    for(int i = 0 ; i <  m ;i++){
                        cout << ln[i];
                    }
                }
                else {
                    cout << "-1 -1";
                }
            }
       }
    // }
    return 0;
}
//code by Duong