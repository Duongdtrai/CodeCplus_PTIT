#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main()
{
	fstream fin; 
	fin.open("PTIT.in", ios::in);
	string data;
	string line;
	vector<string>s;
	while (!fin.eof())          
	{
		getline(fin, line); 
		s.push_back(line);
		// data += (line + "\n");
	}

	fin.close();

    fstream fout;                      
	fout.open("PTIT.out", ios::out); 

	for(int i=0; i<s.size(); i++){
		fout << s[i] << endl; 
	}                          

	fout.close(); 
}
//code by Duong