#include<bits/stdc++.h> // thư viện bao gồm cả ngôn ngữ C và C++
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

struct mcb{
    string macb;
    string tencb;
    float hsl;
    string chucvu;
    float phucap;
    float luong;
    void input(){
        
        getline(cin,macb);
        getline(cin,tencb);
        cin >> hsl;
        cin.ignore(); // scanf("\n");
        getline(cin,chucvu);
        luong = 0;
        if(chucvu == "Giam doc"){
            phucap = 10000000;
            luong = hsl*1500000 + phucap;
        }
            
        else if(chucvu == "Truong phong"){
            phucap = 5000000;
            luong = hsl*1500000 + 5000000;
        }
        else{
            phucap = 5000000;
            luong = hsl*1500000 + 2000000;
        }
            
    }
    void output(){
        cout << macb << "  " << tencb << "  ";
        cout << fixed << setprecision(1)  << hsl << "  " ;
        cout << chucvu << "  " << phucap << "  " << luong;
        cout << endl;
    }
    void add(){
        getline(cin,macb);
        getline(cin,tencb);
        cin >> hsl;
        cin.ignore(); // scanf("\n");
        getline(cin,chucvu);
        luong = 0;
        if(chucvu == "Giam doc"){
            phucap = 10000000;
            luong = hsl*1500000 + phucap;
        }
        else if(chucvu == "Truong phong"){
            phucap = 5000000;
            luong = hsl*1500000 + 5000000;
        } 
        else{
            phucap = 5000000;
            luong = hsl*1500000 + 2000000;
        }
    }
};
void sort_list(struct mcb Coi[1000], int People_Number){
    for(int i = 0; i < People_Number-1; i++){
        for(int j = i+1; j < People_Number; j++){
            if(Coi[i].luong > Coi[j].luong){
                // struct mcb t = Coi[i];
                // Coi[i] = Coi[j];
                // Coi[j] = t;
                swap(Coi[i], Coi[j]);
            }  
        }
    }
}
int main(){
    fstream fout("canbo.dat", ios::out);
    struct mcb Coi[1000];
    cout << "Nhập danh sách số lượng cán bộ: ";
    int People_Number;
    cin >> People_Number;
    cin.ignore(); // scanf("\n");
    for(int i=0; i<People_Number; i++){
        Coi[i].input();
    }
    sort_list(Coi,People_Number);
    cout << "Thêm Cán Bộ: " << endl;
    Coi[People_Number++].add();
    sort_list(Coi,People_Number);
    string s;
    cout << "Mã cán bộ bị xóa: ";
    cin >> s;
    cout << "DANH SÁCH CÁN BỘ: " << endl;
    cout << "Mã cán bộ  Tên cán bộ  Hệ số lương   Chức vụ  Phụ cấp chức vụ  Lương" << endl;
    for(int i=0; i<People_Number; i++){
        if(Coi[i].macb != s){
            fout << Coi[i].macb << "  " << Coi[i].tencb << "  ";
            fout << fixed << setprecision(1)  << Coi[i].hsl << "  " ;
            fout << Coi[i].chucvu << "  " << Coi[i].phucap << "  " << Coi[i].luong;
            fout << endl;
            Coi[i].output();
        }
    }
    return 0;
}
//code by Duong