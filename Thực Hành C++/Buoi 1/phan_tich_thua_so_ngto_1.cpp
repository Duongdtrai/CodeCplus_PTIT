#include<iostream>
#include<cmath>
#include<map>
using namespace std;
void Solve(map<int,int>&res, int m){
    for(int i = 2; i <= sqrt(m); i++){
            res[i] = 0;
            while(m%i == 0){
                res[i]++;
                m = m/i;
            }
        }
    if( m > 1 ){
        res[m] = 1;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m;
        cin >> m;
        map<int,int>res;
        Solve(res, m);
        for(map<int,int>::iterator it=res.begin(); it!= res.end(); it++){
            if(it->second == 0){
                continue;
            }
            else cout << it->first << " " << it->second << " " ;
        }
        cout << endl;
    }
    return 0;
}