#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        long s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i < k) 
                s += a[i];
        }
        int pos = -1;
        long long smax = s;
        for (int i = 0; i <= n - k; i++)
        { 
            if (i != 0)
                s = s - a[i - 1] + a[i + k - 1];
            if (s >= smax)
            {
                smax = s;
                pos = i;
            }
        }
        for (int i = pos; i < pos + k; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}