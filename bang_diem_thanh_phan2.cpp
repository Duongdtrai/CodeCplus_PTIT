#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
struct Student{
    string ma;
    string name;
    string glass;
    double score1;
    double score2;
    double score3;
};
bool cmp(struct Student a, struct Student b){
    return a.name > b.name;
}
int main(){
    int t;
    cin >> t;
    struct Student sv[105];
    cin.ignore();
    for(int i = 0 ; i < t; i++){
        getline(cin,sv[i].ma);
        getline(cin,sv[i].name);
        getline(cin,sv[i].glass);
        cin >> sv[i].score1 >> sv[i].score2 >> sv[i].score3;
        cin.ignore();
    }
    for(int i = 0; i<t ;i++){
        cout << i+1 << " ";
        cout << sv[i].ma << " " << sv[i].name << " " << sv[i].glass << " ";
        cout << fixed << setprecision(1) << sv[i].score1 << " " ;
        cout << fixed << setprecision(1) << sv[i].score2 << " ";
        cout << fixed << setprecision(1) << sv[i].score3  << endl;
    }
    return 0;
}
//code by Duong