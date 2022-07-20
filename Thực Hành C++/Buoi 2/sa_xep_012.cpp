#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
void handle(vector<int>&a,int n,int &count){

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x != 0){
            a.push_back(x);
        }
        else count++;
    }
    sort(a.begin(),a.end());
}
void out(vector<int>a,int n,int count){
    while(count--){
        cout << "0 ";
    }
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a;
        int count = 0;
        handle(a,n,count);
        out(a,n,count);
    }
    return 0;
}