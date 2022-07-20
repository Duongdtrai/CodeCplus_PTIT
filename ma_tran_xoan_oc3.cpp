#include <iostream>
#include <cmath>
#include <vector>
typedef long long ll;
using namespace std;
const int mod = 10e9 + 7;
void Solve(vector<ll> &c, vector<vector<ll> > &a, int x, int y)
{
    ll hang = x - 1;
    ll cot = y - 1;
    ll gt = 0;
    ll size = 0;
    while (gt < x - 1)
    {
        for (int i = gt; i <= cot; i++)
        {
            c.push_back(a[gt][i]);
            size++;
        }
        if (size == x * y)
        {
            break;
        }
        for (int i = gt + 1; i <= hang; i++)
        {
            c.push_back(a[i][cot]);
            size++;
        }
        if (size == x * y)
        {
            break;
        }
        for (int i = cot - 1; i >= gt; i--)
        {
            c.push_back(a[hang][i]);
            size++;
        }
        if (size == x * y)
        {
            break;
        }
        for (int i = hang - 1; i >= gt + 1; i--)
        {
            c.push_back(a[i][gt]);
            size++;
        }
        if (size == x * y)
        {
            break;
        }
        gt++;
        hang--;
        cot--;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        vector<vector<ll> > a;
        for (int i = 1; i <= x; i++)
        {
            vector<ll> gt;
            for (int j = 1; j <= y; j++)
            {
                int x;
                cin >> x;
                gt.push_back(x);
            }
            a.push_back(gt);
        }
        vector<ll> c;
        Solve(c, a, x, y);
        cout << c[k-1] << endl;
    }
    return 0;
}