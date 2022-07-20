#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
class SinhVien{
public:
    string name;
    string glass;
    string birthday;
    string ngay;
    string thang;
    string stt;
    float score;
public:
    friend istream &operator>> (istream&, SinhVien&);
    friend ostream &operator<< (ostream&, SinhVien&);
};
bool cmp(struct SinhVien a, struct SinhVien b){
    return a.score > b.score;
}
istream &operator>> (istream &in, SinhVien &p){
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
void sapxep(class SinhVien ds[], int n){
    string Ma = "B20DCCN";
    int a = Ma.size();
    int member = 1;
    for(int m = 0; m < n; m++){
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
        ds[m].stt = s;
        member++;
    }
    sort(ds,ds+n,cmp);
}
ostream &operator<< (ostream &out, SinhVien &p){  
        string cop = p.name;
        for(int k = 0; k < cop.size(); k++){
            if('A' <= cop[k] && cop[k] <= 'Z'){
                cop[k] = cop[k] + 32;
            }
        }
        string tmp;
        stringstream ps(cop);
        string dyh[1000];
        int sizeone = 0;
        while(ps >> tmp){
            dyh[sizeone++] = tmp;
        }
        for(int k = 0; k < sizeone; k++){
            dyh[k][0] = dyh[k][0] -32;
        }
        out << p.stt <<" ";
        for(int k = 0; k < sizeone; k++){
            out << dyh[k] << " ";
        }
        out  << p.glass << " " << p.ngay << "/" << p.thang << "/";
        string ao = p.birthday;
        for(int k = ao.size()-4 ; k < ao.size() ; k++){
            out << ao[k];
        }
        out << " ";
        out << fixed << setprecision(2) << p.score << endl;
        return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
//code by Duong