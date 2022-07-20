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
    double score;
};
void nhapThongTinSV(struct SinhVien &ds){
        getline(cin,ds.name);
        cin>>ds.glass;
        cin >>ds.birthday;
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
        cin >> ds.score;
}
void inThongTinSV(struct SinhVien ds){
    cout << "N20DCCN001" << " ";
    cout<< ds.name << " "  << ds.glass << " " << ds.ngay << "/" << ds.thang << "/";
    string ao = ds.birthday;
    for(int k = ao.size()-4 ; k < ao.size() ; k++){
        cout << ao[k];
    }
    cout << " ";
    cout << fixed << setprecision(2) << ds.score << endl;;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
//code by Duong