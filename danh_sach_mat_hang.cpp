#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
class List{
public:
    int stt;
    string name;
    string group;
    double PriceBuy;
    double PriceSell;
    double tb;
}typedef List;
bool cmp(List a, List b){
    return a.tb  > b.tb;
}
int main(){
    int n;
    cin >> n;
    List ds[105];
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin,ds[i].name);
        getline(cin,ds[i].group);
        cin >> ds[i].PriceBuy >> ds[i].PriceSell;
        ds[i].stt = i+1;
        ds[i].tb=(double)(ds[i].PriceSell-ds[i].PriceBuy);
        cin.ignore();
    }
    sort(ds,ds+n,cmp);
    for(int i = 0; i < n ;i++){
        cout << ds[i].stt << " " << ds[i].name << " " << ds[i].group<<" ";
        cout << fixed << setprecision(2) << ds[i].tb << endl;;
    }
    return 0;
}
//code by Duong