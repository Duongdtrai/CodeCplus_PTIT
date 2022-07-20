#include <bits/stdc++.h>
#define IOS()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;

ll xu_li_string(string a, ll m)
{
    ll sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum = sum * 10 + (a[i] - 48);
        sum = sum % m;
    }
    return sum;
}
ll power(string a, ll b, ll m)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return xu_li_string(a,m);
    ll t = power(a,b/2,m) % m;
    if (b % 2 == 0)
        return (t * t) % m;
    else
        return ((t * t) % m * xu_li_string(a,m)) % m;
}

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        string a;
        ll b, m;
        cin >> a;
        cin >> b >> m;
        cout << power(a,b,m) << endl;
    }
    return 0;
}
//code by Duong