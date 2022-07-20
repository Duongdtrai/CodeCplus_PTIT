#include<iostream>
#include<cmath>
#include<string>
#include<sstream>
#include<vector>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1;
        getline(cin,s1);
        stringstream p(s1);
        string temp;
        int count = 0;
        while(p >> temp){
            count++;
        }
        cout << count << endl;
    }
    return 0;
}