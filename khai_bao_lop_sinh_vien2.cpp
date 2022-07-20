#include<bits/stdc++.h>
#define a() a
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
class SinhVien{
private:
    string name;
    string glass;
    string birthday;
    string ngay;
    string thang;
    string nam;
    float score;
public:
    friend istream &operator >> (istream &, SinhVien &);
    friend ostream &operator << (ostream &, SinhVien &);

};
istream &operator>> (istream &in, SinhVien &p){
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
        out << "B20DCCN001" << " " << p.name << " " <<p.glass << " " <<p.ngay << "/" <<p.thang << "/";
        string ao = p.birthday;
        for(int i =ao.size()-4 ; i < ao.size() ; i++){
            out << ao[i];
        }
        out << " ";
        out << fixed << setprecision(2) <<p.score << endl;
        return out;
    }
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
//code by Duong