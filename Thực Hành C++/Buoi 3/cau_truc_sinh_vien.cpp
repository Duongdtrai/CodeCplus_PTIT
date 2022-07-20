#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<sstream>
#include<iomanip>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
struct SinhVien{
    string name;
    string glass;
    string birthday;
    string ngay;
    string thang;
    string nam;
    float score;
};
void nhap(struct SinhVien &ds){
    getline(cin,ds.name);
    getline(cin,ds.glass);
    getline(cin,ds.birthday);
    cin >> ds.score;
}
void handle_DayMonthYear(struct SinhVien &ds){
    string a = ds.birthday;
    int sum = 0;
    int k;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '/'){
            k = i;
            break;
        }
        int x = (int)(a[i]-48);
        sum = sum*10+x;
    }
    if(sum < 10){
        string m = "0";
        char c = (char)(sum+48);
        m = m + c;
        ds.ngay = m;
    }
    else{
        string m ="";
        int one = sum%10;
        int two = sum / 10;
        char c = (char)(two+48);
        m = m + c;
        c = (char)(one+48);
        m = m + c;
        ds.ngay = m;
    }
    sum = 0;
    for(int i = k+1; i < a.size(); i++){
        if(a[i] == '/'){
            k = i;
            break;
        }
        int x = (int)(a[i]-48);
        sum = sum*10+x;
    }
    if(sum < 10){
        string m = "0";
        char c = (char)(sum+48);
        m = m + c;
        ds.thang = m;
    }
    else{
        string m ="";
        int one = sum%10;
        int two = sum / 10;
        char c = (char)(two+48);
        m = m + c;
        c = (char)(one+48);
        m = m + c;
        ds.thang = m;
    }
}
string handle_name(){
    string Ma = "B20DCCN";
    int a = Ma.size();
    int member = 1;
    stringstream ss;
    ss << member;
    string s = ss.str();
    int x = 0;
    while(s.size() < 3){
        s = '0'+ s;
    }
    while(s.size() < 10){
        s = Ma[a-1 -x] + s;
        x++;
    }
    return s;
}
void in(struct SinhVien ds){
    handle_DayMonthYear(ds);
    cout << handle_name() << " ";
    cout<< ds.name << " "  << ds.glass << " " << ds.ngay << "/" << ds.thang << "/";
    string ao = ds.birthday;
    for(int k = ao.size()-4 ; k < ao.size() ; k++){
        cout << ao[k];
    }
    cout << " ";
    cout << fixed << setprecision(2) << ds.score << endl;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
//code by Duong