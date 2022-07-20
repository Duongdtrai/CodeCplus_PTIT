#include <iostream>
#include <cmath>
#include <algorithm>
#define IOS()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;
int n;
void Input()
{
    cin >> n;
}
void Solve()
{
    if (n < 450)
        cout << "-1" << endl;
    else if (n <= 520)
        cout << "7" << endl;
    else if (n <= 595)
        cout << "8" << endl;
    else if (n <= 725)
        cout << " 9" << endl;
    else if(n <= 990)
        cout << "10" << endl;   
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        Input();
        Solve();
    }
    return 0;
}
// code by Duong