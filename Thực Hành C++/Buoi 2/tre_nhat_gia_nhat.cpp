#include<iostream>
#include<cmath>
#include<algorithm>
#include<sstream>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
struct odd{
    string name;
    int year;
    int month;
    int day;
};
int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s[1000];
    for(int i = 0; i < n; i++){
        getline(cin,s[i]);
    }
    struct odd a[1000];
    int size = 0;
    for(int i = 0; i < n; i++){
        int x = 0;
        stringstream p(s[i]);
        string tmp;
        string dy[1000];
        while(p >> tmp){
            dy[x++] = tmp;
        }
        a[size].name = dy[0];
        int sum = 0;
        for(int j = 0; j < 2; j++){
            sum = sum*10+ (dy[1][j] - 48);
        }
        a[size].day = sum;
        sum = 0;
        for(int j = 3; j < 5; j++){
            sum = sum*10+ (dy[1][j] - 48);
        }
        a[size].month = sum;
        sum = 0;
        for(int j = 6; j<=9 ;j++){
            sum = sum*10+ (dy[1][j] - 48);
        }
        a[size].year = sum;
        size++;
    }
    for(int i = 0; i < size-1; i++){
        for(int j = i+1; j < size; j++){
            if(a[i].year > a[j].year){
                struct odd t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(int i = 0; i < size-1; i++){
        for(int j = i+1; j < size; j++){
            if(a[i].month > a[j].month && a[i].year == a[j].year){
                struct odd t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(int i = 0; i < size-1; i++){
        for(int j = i+1; j < size; j++){
            if(a[i].day > a[j].day && a[i].month == a[j].month && a[i].year == a[j].year){
                struct odd t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    cout << a[size-1].name << endl << a[0].name;
    return 0;
}
//code by Duong