#include<bits/stdc++.h>
using namespace std;

void tong(long long &sum, string s){
    for (int i = 0; i < s.size(); i++){
        if (s[i] < '0' || s[i] > '9') s[i] =' ';
    }
    stringstream p(s);
    long long token;
    vector<long long> ans;
    while (p >> token){
        ans.push_back(token);
    }
    for (int i = 0; i < ans.size(); i++){
        if (ans[i] <= 1000000000){
            sum += ans[i];
        }
    }
}
long long input(){
    fstream fin("DATA.in", ios :: in);
    long long sum = 0;
	while (!fin.eof()){
		string s;
		getline(fin, s);
		tong(sum,s);
	}
    return sum;
}
int main(){
    cout << input();
	return 0;
}
// code by Duong
