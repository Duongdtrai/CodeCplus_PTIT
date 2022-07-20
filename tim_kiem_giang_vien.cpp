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
    string name2;
};
void nhap(class lecturer &a){
    scanf("\n");
	getline(cin, a.name);
    scanf("\n");
    getline(cin, a.major);
}
 
void in(class lecturer a[2005],int n, int q){
    vector<string>res;
    for(int i=0;i<q;i++){
        scanf("\n");
        string in;
        getline(cin, in);
        res.push_back(in);
    }
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
        string tenthuong = a[i].name;
        for(int j = 0; j < tenthuong.size(); j++){
            if(  'A' <= tenthuong[j] && tenthuong[j] <= 'Z'){
                tenthuong[j] = tenthuong[j] + 32; 
            }
        }
        a[i].name2 = tenthuong; 
    }
    for(int i = 0; i < res.size();i++){
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << res[i] << ":" << endl;
        for(int j = 0; j < res[i].size();j++){
            if(  'A' <= res[i][j] && res[i][j] <= 'Z'){
                res[i][j] = res[i][j] + 32; 
            }
        } 
        for(int j = 0;j < n; j++){
            if(a[j].name2.find(res[i]) != -1){
                if(a[j].number < 10){
                    cout << "GV0" << a[j].number <<" " << a[j].name << " " << a[j].ShortMajor << endl;
                }
                else{
                    cout << "GV" << a[j].number <<" " << a[j].name << " " << a[j].ShortMajor << endl;
                }
            } 
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
    int q;
    cin >> q;
	in(a,n,q);
	return 0;
}
// code by Duong