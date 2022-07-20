#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int member = 1;
class SinhVien{
private:
    string name;
    string glass;
    string birthday;
    string ngay;
    string thang;
    string nam;
    double score;
public:
    friend istream &operator >> (istream &, SinhVien &);
    friend ostream &operator << (ostream &, SinhVien &);

};
istream &operator >> (istream &in, SinhVien &p){
        scanf("\n");
        getline(in,p.name);
        getline(in,p.glass);
        getline(in,p.birthday);
        string a = p.birthday;
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
            p.ngay = m;
        }
        else{
            string m ="";
            int one = sum%10;
            int two = sum / 10;
            char c = (char)(two+48);
            m = m + c;
            c = (char)(one+48);
            m = m + c;
            p.ngay = m;
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
            p.thang = m;
        }
        else{
            string m ="";
            int one = sum%10;
            int two = sum / 10;
            char c = (char)(two+48);
            m = m + c;
            c = (char)(one+48);
            m = m + c;
            p.thang = m;
        }
        in >> p.score;
        return in;
}
ostream &operator << (ostream &out, SinhVien &p){
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
        cout << s << " " << p.name << " " << p.glass << " " << p.ngay << "/" << p.thang << "/";
        string ao = p.birthday;
        for(int i =ao.size()-4 ; i < ao.size() ; i++){
            cout << ao[i];
        }
        cout << " ";
        cout << fixed << setprecision(2) << p.score << endl;;
        member++;
        return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
//code by Duong