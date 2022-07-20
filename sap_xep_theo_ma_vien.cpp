
#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
class Student{
public:
    string maSv;
    string name;
    string lop;
    string email;
    // void input(){
    //     scanf("\n");
    //     getline(cin,maSv);
    //     getline(cin,name);
    //     getline(cin,lop);
    //     getline(cin,email);
    // }
    void display(){
        cout << maSv << " " << name << " " << lop << " " << email << endl;
    }
};
bool cmp(Student a, Student b){
    return a.maSv < b.maSv;
}
int main(){
    IOS()
    Student a[1005];
    int size = 0;
    while(getline(cin,a[size].maSv)){
        getline(cin,a[size].name);
        getline(cin,a[size].lop);
        getline(cin,a[size].email);
        size++;
    }
    sort(a,a+size,cmp);
    for(int i = 0; i < size ;i++){
        a[i].display();
    }
    return 0;
}
//code by Duong