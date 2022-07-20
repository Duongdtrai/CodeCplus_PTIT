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
        ll n;
        cin >> n;
        ll a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int ok = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j] == i)
                {
                    ok = 1;
                    cout << i << " ";
                    break;
                }
            }
            if (ok == 0)
            {
                cout << "-1" << " ";
            }
        }
        cout << endl;
    }
    return 0;
}