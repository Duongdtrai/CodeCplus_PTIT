#include<iostream>
#include<cmath>
#include<algorithm>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

class DucDut{
private:
    string name;
    int age; 
public:
    DucDut();
    DucDut(string name, int age);
    void nhap();
    void xuat();
};
DucDut::DucDut(){
}
DucDut::DucDut(string name, int age){
    this->name = name;
    this->age = age;
}
void DucDut:: nhap(){
    cin >> name >> age;
}
void DucDut :: xuat(){
    cout << name << " " << age ;
}
int main(){
    DucDut a;
    DucDut("Null",20);
    a.nhap();
    a.xuat();
    return 0;
}
//code by Duong