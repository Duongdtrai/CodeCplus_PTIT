#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int check(string a, string b){
	string s1;
	string s2;
	s1 = a;
	s1 = s1+b; 
    s2 = b;
    s2 = s2+a;
	if(s1 >= s2){
		return 1; 
	}
	else return 0; 
}
struct taptu{
    string name;
};

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1;
        getline(cin,s1);
        string s2;
        getline(cin,s2);
        stringstream p(s1);
        stringstream p1(s2);
        vector<string>s3;
        vector<string>s4;
        string temp;
        while(p >> temp){
            s3.push_back(temp);
        }
        string temp2;
        while(p1 >> temp2){
            s4.push_back(temp2);
        }
        taptu a[205];
        int x = 0;
        for(int i = 0 ; i < s3.size(); i++){
            int ok = 0;
            for(int j = 0 ; j < s4.size(); j++){
                if(s3[i] == s4[j]){
                    ok = 1;
                    break;
                }
            }
            if(ok == 0){
                int ok1 = 0;
                for(int k = 0 ; k < x; k++){
                    if(a[k].name == s3[i]){
                        ok1 = 1;
                        break;
                    }
                }
                if(ok1 == 0){
                    a[x++].name = s3[i];
                }
            }
        }
        for(int i = 0 ; i < x-1; i++){
            for(int j = i + 1 ; j < x; j++){
                if(check(a[i].name,a[j].name) == 1){
                    taptu t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
        for(int i = 0 ;i < x; i++){
            cout << a[i].name << " ";
        }
        cout << endl;
    }
    return 0;
}
//code by Duong

                            // Nên dùng cách ở trên

/*#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
struct taptu{
    string name;
};

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1;
        getline(cin,s1);
        string s2;
        getline(cin,s2);
        stringstream p(s1);
        stringstream p1(s2);
        vector<string>s3;
        vector<string>s4;
        string temp;
        while(p >> temp){
            s3.push_back(temp);
        }
        string temp2;
        while(p1 >> temp2){
            s4.push_back(temp2);
        }
        taptu a[205];
        int x = 0;
        for(int i = 0 ; i < s3.size(); i++){
            int ok = 0;
            for(int j = 0 ; j < s4.size(); j++){
                if(s3[i] == s4[j]){
                    ok = 1;
                    break;
                }
            }
            if(ok == 0){
                int ok1 = 0;
                for(int k = 0 ; k < x; k++){
                    if(a[k].name == s3[i]){
                        ok1 = 1;
                        break;
                    }
                }
                if(ok1 == 0){
                    a[x++].name = s3[i];
                }
            }
        }
        for(int i = 0 ; i < x-1; i++){
            for(int j = i + 1 ; j < x; j++){
                if(a[i].name > a[j].name){
                    taptu t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
        for(int i = 0 ;i < x; i++){
            cout << a[i].name << " ";
        }
        cout << endl;
    }
    return 0;
}
//code by Duong*/