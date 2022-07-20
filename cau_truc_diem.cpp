#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
struct Point{
     double x, y;
}typedef Point;  
void input(Point &A){
    cin >> A.x >> A.y;
}
double distance(Point A, Point B){
    double sum = (double)sqrt((B.x - A.x)*(B.x - A.x) + (B.y - A.y)*(B.y - A.y));
    return sum;
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
//code by Duong