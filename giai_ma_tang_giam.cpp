#include<iostream>
#include<cmath>
#include<algorithm>
#include<stack>
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
        stack <int> q;
        for(int i = 0; i <= s.size(); i++){
            if(s[i] != 'D' || i == s.size()){ // 3 2 1 6 5 4 7 9 8
                cout << i+1;
                while(q.empty() == 0){ // hàm empty : kiểm tra hộp còn hay không, nếu = 0 là còn, nếu  = 1 là không còn
                    cout << q.top(); // lôi ra cái trên cùng
                    q.pop(); // xóa đi cái trên cùng
                }
            }
            else if(s[i]=='D'){ 
                q.push(i+1); // push : đẩy
            // q:  8
            }
        }
        cout << endl;
    }
    return 0;
}
//code by Duong