#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
struct SinhVien{
    string name;
    string glass;
    string birthday;
    string ngay;
    string thang;
    string stt;
    float score;
};
bool cmp(struct SinhVien a, struct SinhVien b){
    return a.score > b.score;
}
void nhap(struct SinhVien ds[], int &n){
    for(int i = 0; i < n; i++){
        scanf("\n");
        getline(cin,ds[i].name);
        getline(cin,ds[i].glass);
        getline(cin,ds[i].birthday);
        string a = ds[i].birthday;
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
            ds[i].ngay = m;
        }
        else{
            string m ="";
            int one = sum%10;
            int two = sum / 10;
            char c = (char)(two+48);
            m = m + c;
            c = (char)(one+48);
            m = m + c;
            ds[i].ngay = m;
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
            ds[i].thang = m;
        }
        else{
            string m ="";
            int one = sum%10;
            int two = sum / 10;
            char c = (char)(two+48);
            m = m + c;
            c = (char)(one+48);
            m = m + c;
            ds[i].thang = m;
        }
        cin >> ds[i].score;
    }
}
void sapxep(struct SinhVien ds[], int n){
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
void in(struct SinhVien ds[], int n){  
    for(int h = 0; h < n; h++){
        string cop = ds[h].name;
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
        cout << ds[h].stt <<" ";
        for(int k = 0; k < sizeone; k++){
            cout << dyh[k] << " ";
        }
        cout  << ds[h].glass << " " << ds[h].ngay << "/" << ds[h].thang << "/";
        string ao = ds[h].birthday;
        for(int k = ao.size()-4 ; k < ao.size() ; k++){
            cout << ao[k];
        }
        cout << " ";
        cout << fixed << setprecision(2) << ds[h].score << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
//code by Duong