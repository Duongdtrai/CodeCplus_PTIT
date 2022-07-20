#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int a = 1;
        int b = 2;
        int c = 3;
        int d = 4;
        int count1 = 1;
        int count2 = 2;
        int count3 = 3;
        int count4 = 4;
        long long sum = 0;
        reverse(s.begin(), s.end());
        if(s[0] == '0'){
            sum = sum + 0;
        }
        else if(s[0] == '1'){
            sum = sum + 1;
        }
        for(int i = 1; i < s.size(); i++){
            if(count1 == i){
                count1 = count1 + 4;
                if(s[i] == '0'){
                    sum = sum + 0;
                }
                else{
                    sum = sum + 2;
                }
            }
            else if(count2 == i){
                count2 = count2 + 4;
                if(s[i] == '0'){
                    sum = sum + 0;
                }
                else{
                    sum = sum + 4;
                }
            }
            else if(count3 == i){
                count3 = count3 + 4;
                if(s[i] == '0'){
                    sum = sum + 0;
                }
                else{
                    sum = sum + 8;
                }
            }            
            else if(count4 == i){
                count4 = count4 + 4;
                if(s[i] == '0'){
                    sum = sum + 0;
                }
                else{
                    sum = sum + 6;
                }
            }
        }
        if(sum%5 == 0){
            cout <<"Yes" << endl;
        }
        else cout << "No" << endl;
    }
    return 0;
}