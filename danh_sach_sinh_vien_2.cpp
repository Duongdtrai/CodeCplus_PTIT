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
void nhap(struct SinhVien ds[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin,ds[i].name);
        getline(cin,ds[i].glass);
        getline(cin,ds[i].birthday);
        cin >> ds[i].score;
    }
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
string count_students(int member){
    string Ma = "B20DCCN";
    int a = Ma.size();
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
void in(struct SinhVien ds[], int n){
    int member = 1;
    for(int i = 0; i < n; i++){
        handle_DayMonthYear(ds[i]);
        count_students(member);
        string cop = ds[i].name;
        for(int k = 0; k < cop.size(); k++){
            if('A' <= cop[k] && cop[k] <= 'Z'){
                cop[k] = cop[k] + 32;
            }
        }
        string tmp;
        stringstream p(cop);
        string dyh[1000];
        int sizeone = 0;
        while(p >> tmp){
            dyh[sizeone++] = tmp;
        }
        for(int k = 0; k < sizeone; k++){
            dyh[k][0] = dyh[k][0] -32;
        }
        cout << count_students(member) << " ";
        for(int k = 0; k < sizeone; k++){
            cout << dyh[k] << " ";
        }
        cout  << ds[i].glass << " " << ds[i].ngay << "/" << ds[i].thang << "/";
        string ao = ds[i].birthday;
        for(int k = ao.size()-4 ; k < ao.size() ; k++){
            cout << ao[k];
        }
        cout << " ";
        cout << fixed << setprecision(2) << ds[i].score << endl;;
        member++;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
//code by Duong