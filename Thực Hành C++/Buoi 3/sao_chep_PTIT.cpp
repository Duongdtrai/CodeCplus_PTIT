#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

void input(string data, vector<string>&s){
    fstream fin; 
	fin.open("PTIT.in", ios::in);
	while (!fin.eof())          
	{
        string line;
		getline(fin, line); 
		s.push_back(line);
	}
	fin.close();
}
void output(vector<string>s){
    fstream fout;                      
	fout.open("PTIT.out", ios::out); 
	for(int i=0; i<s.size(); i++){
		fout << s[i] << endl; 
	}  
    fout.close(); 
}
int main(){
	string data;
	vector<string>s;
	input(data,s);
    output(s);
}
//code by Duong