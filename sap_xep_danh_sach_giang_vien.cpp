#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
class lecturer{
public:
	string name;
    string major;
    int number;
    string lastname;
    string ShortMajor;
};
void nhap(class lecturer &a){
    scanf("\n");
	getline(cin, a.name);
    scanf("\n");
    getline(cin, a.major);
}
 
void in(class lecturer a[2005],int n){
    for(int i = 0;i < n; i++){
        vector<string>s;
        stringstream p(a[i].name);
        string tmp;
        while(p >> tmp) s.push_back(tmp);
        a[i].lastname = s[s.size()-1];
        stringstream ss(a[i].major);
        string major = "";
        string temp;
        vector<string>s1;
        while(ss >> temp) s1.push_back(temp);
        for(int j = 0; j < s1.size(); j++){
            if( 'a' <= s1[j][0] && s1[j][0] <= 'z'){
                s1[j][0] = s1[j][0] - 32;
                major = major + s1[j][0];
            }
            else{
                major = major + s1[j][0];
            }
        }
        a[i].ShortMajor = major;
    }
    for(int i = 0;i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i].lastname > a[j].lastname){
                class lecturer t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            else if(a[i].lastname == a[j].lastname){
                if(a[i].number > a[j].number){
                    class lecturer t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
    }
    for(int i=0;i < n; i++){
        if(a[i].number < 10){
            cout << "GV0" << a[i].number <<" " << a[i].name << " " << a[i].ShortMajor << endl;
        }
        else{
            cout << "GV" << a[i].number <<" " << a[i].name << " " << a[i].ShortMajor << endl;
        }
    }
	
}
int main()
{
	class lecturer a[2005];
	int n; cin >> n;
	for(int i=0; i < n; i++){
		nhap(a[i]);
        a[i].number = i+1;
	}
	in(a,n);
	return 0;
}
// code by Duong