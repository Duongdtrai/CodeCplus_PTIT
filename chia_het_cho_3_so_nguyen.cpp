#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
       ll a,b,c,x;
       cin >> a >> b >> c >> x;
       ll bcnn = (a*b)/__gcd(a,b);
       bcnn = (bcnn*c)/__gcd(bcnn,c);
       ll d = pow(10,x-1);
       ll test = d/bcnn;
       ll result = bcnn;
       for(ll i = test; ; i++){
           if(d <= result*i && result*i < pow(10,x)){
               cout << result*i << endl;
               break;
           }
           else if( result*i >= pow(10,x)){
               cout << "-1" << endl;
               break;
           }
       }
    }
    return 0;
}
//code by Duong