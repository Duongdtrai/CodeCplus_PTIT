#include<bits/stdc++.h>
#include<fstream>
using namespace std;
set<string>se;
set<string>mu1,mu2;
vector<string>ve1,ve2;
main(){
	string s1,s2;
	ifstream fp1,fp2;
	fp1.open("DATA1.in");
	fp2.open("DATA2.in");
	while(fp1 >> s1){
		for(int i=0;i<s1.size();i++){
			s1[i]=tolower(s1[i]);
		}
		se.insert(s1); mu1.insert(s1);
	}
	while(fp2 >> s2){
		for(int i=0;i<s2.size();i++){
			s2[i]=tolower(s2[i]);
		}
		se.insert(s2); mu2.insert(s2);
	}
	fp1.close();
	fp2.close();
	for(auto i:se) cout<<i<<" ";
	cout<<endl;
	for(auto i:mu1){
		ve1.push_back(i);
	}
	for(auto i:mu2){
		ve2.push_back(i);
	}
	int l1=0;
	for(int i=0;i<ve1.size();i++){
		while(ve1[i].compare(ve2[l1])>0&&l1<ve2.size()) l1++;
		if(ve1[i]==ve2[l1]){
			l1++;
			cout<<ve1[i]<<" ";
		}
	}
}