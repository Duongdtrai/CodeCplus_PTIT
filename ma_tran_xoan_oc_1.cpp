#include <iostream>
#include <cmath>
typedef long long ll;
using namespace std;
const int mod = 10e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll a[x + 5][y + 5];
        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= y; j++)
            {
                cin >> a[i][j];
            }
        }
        ll c[x * y + 5];
        ll hang = x;
        ll cot = y;
        ll gt = 1;
        ll size = 0;
        while (gt <= x - 1){
            for (int i = gt; i <= cot; i++)
            {
                c[size++] = a[gt][i];
            }
            if (size == x * y)
            {
                break;
            }
            for (int i = gt + 1; i <= hang; i++)
            {
                c[size++] = a[i][cot];
            }
            if (size == x * y)
            {
                break;
            }
            for (int i = cot - 1; i >= gt; i--)
            {
                c[size++] = a[hang][i];
            }
            if (size == x * y)
            {
                break;
            }
            for (int i = hang - 1; i >= gt + 1; i--)
            {
                c[size++] = a[i][gt];
            }
            if (size == x * y)
            {
                break;
            }
            gt++;
            hang--;
            cot--;
        }
        for (int i = 0; i <  size; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}