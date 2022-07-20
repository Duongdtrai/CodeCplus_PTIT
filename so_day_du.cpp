#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){ 
        string s;
        cin >> s;
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        int count3 = 0;
        int count4 = 0;
        int count5 = 0;
        int count6 = 0;
        int count7 = 0;
        int count8 = 0;
        int count9 = 0;
        int ok = 1;
        for(int i = 0 ; i < s.size(); i++){
            if(s[0] == '0'){
                ok = 0;
                break;
            }
            else if(s[i] == '0'){
                count0++;
            }
            else if(s[i] == '1'){
                count1++;
            }
            else if(s[i] == '2'){
                count2++;
            }
            else if(s[i] == '3'){
                count3++;
            }
            else if(s[i] == '4'){
                count4++;
            }
            else if(s[i] == '5'){
                count5++;
            }
            else if(s[i] == '6'){
                count6++;
            }
            else if(s[i] == '7'){
                count7++;
            }
            else if(s[i] == '8'){
                count8++;
            }
            else if(s[i] == '9'){
                count9++;
            }
            else {
                ok = 0;
                break;
            }
        }
        if(ok == 0){
                cout << "INVALID" << endl;
        }
        else{
            int sum = count0 + count1 + count2 + count3 + count4 + count5 + count6+ count7 + count8 + count9;
            if(count0 > 0 && count1 > 0 &&count2 > 0 &&count3 > 0 && count4 > 0 &&count5 > 0 &&count6 > 0 &&count7 > 0 &&count8 > 0 &&count9 > 0 ){
                if(sum == s.size()) 
                {
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                } 
                
            }
            else cout << "NO" << endl;
        }
    }
    return 0;
}
//code by Duong
