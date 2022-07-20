#include<bits/stdc++.h>
#include<fstream>
using namespace std;
set<string>se;
main(){
	string s;
	ifstream fp;
	fp.open("VANBAN.in");
	while(fp >> s){
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		se.insert(s);
	}
	fp.close();
	for(auto i:se) cout<< i << endl;
}