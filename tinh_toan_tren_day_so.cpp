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
const ll mod = 1e9 + 7;

ll n;
ll a[100000];
void Input()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void Solve()
{
    ll ucln = a[0];
    ll hx = 1;
    for (ll i = 0; i < n; i++)
    {
        ucln = __gcd(ucln, a[i]);
        hx = (hx * a[i]) % mod;
    }
    ll sum1 = 1;
    // cout << ucln <<" " << hx << endl;
    for (ll i = 1; i <= ucln; i++){
        sum1 = (sum1 * hx) % mod;
    }
    cout << sum1 << endl;
}
int main()
{
    IOS()
    ll test;
    cin >> test;
    while (test--)
    {
        Input();
        Solve();
    }
    return 0;
}
//code by Duong