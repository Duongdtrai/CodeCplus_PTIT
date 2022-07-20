#include <iostream>
#include <cmath>
#include <algorithm>
#include<string>
#include<sstream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;
struct NhanVien{
    string name;
    string gender;
    string birthday;
    string address;
    string zip;
    string day;
    string maSV;
    int ngay;
    int thang;
    int nam;
};
void nhap(struct NhanVien &b){
    scanf("\n");
    getline(cin,b.name);
    getline(cin,b.gender);
    getline(cin,b.birthday);
    getline(cin,b.address);
    getline(cin,b.zip);
    getline(cin,b.day);
   // cout << b.name << " " << b.gender << endl;
}
void sapxep(struct NhanVien ds[],int n){
    int duongtro = 1;
    for(int h = 0; h < n; h++){
        string dem;
        stringstream ss;
        ss << duongtro; // lúc này ss đang là số int
        dem = ss.str();
        while(dem.size() < 5){
            dem = "0" + dem;
        }
        ds[h].maSV = dem;
        duongtro++;
    }
    for(int h = 0; h < n; h++){
        string a = ds[h].birthday;
        int k;
        int sum = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == '/'){
                k = i;
                break;
            }
            else{
                sum = sum*10+(a[i]-48);
            }
        }
        ds[h].thang = sum;
        sum = 0;
        for(int i = k+1; i < a.size(); i++){
            if(a[i] == '/'){
                k = i;
                break;
            }
            else{
                sum = sum*10+(a[i]-48);
            }
        }
        ds[h].ngay = sum;
        sum = 0;
        for(int i = k+1; i < a.size(); i++){
            sum = sum*10+(a[i]-48);
        }
        ds[h].nam = sum;
    }
    for(int h = 0; h < n - 1; h++){
        for(int j = h+1; j < n; j++){
            if(ds[h].nam > ds[j].nam){
                struct NhanVien t = ds[h];
                ds[h] = ds[j];
                ds[j] = t;
            }
        }
    }
    for(int h = 0; h < n - 1; h++){
        for(int j = h+1; j < n; j++){
            if(ds[h].thang > ds[j].thang &&ds[h].nam == ds[j].nam ){
                struct NhanVien t = ds[h];
                ds[h] = ds[j];
                ds[j] = t;
            }
        }
    }
    for(int h = 0; h < n - 1; h++){
        for(int j = h+1; j < n; j++){
            if(ds[h].ngay > ds[j].ngay && ds[h].nam == ds[j].nam && ds[h].thang == ds[j].thang ){
                struct NhanVien t = ds[h];
                ds[h] = ds[j];
                ds[j] = t;
            }
        }
    }
}
void inds(struct NhanVien mn[50],int n){
    
    for(int i = 0; i < n; i++){
        cout << mn[i].maSV <<" " << mn[i].name << " " << mn[i].gender << " " << mn[i].birthday<<" "<< mn[i].address << " " << mn[i].zip << " " << mn[i].day << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++){
        nhap(ds[i]);
    }
    sapxep(ds,N);
    inds(ds, N);
    return 0;
}
//code by Duong