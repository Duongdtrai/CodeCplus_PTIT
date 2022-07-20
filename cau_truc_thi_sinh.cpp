#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;
struct ThiSinh{
    string name;
    string birthday;
    double score1;
    double score2;
    double score3;
    double tb;
};
void nhap(struct ThiSinh &b){
    getline(cin,b.name);
    cin >> b.birthday;
    cin >> b.score1 >> b.score2 >> b.score3;
    b.tb = (double)b.score1+b.score2+b.score3;
}
void in(struct ThiSinh mn){
    cout << mn.name << " " << mn.birthday << " ";
    cout << fixed << setprecision(1) << mn.tb;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
//code by Duong