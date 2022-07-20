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
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        stable_sort(a, a + n);
        long long count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int index = a[i] + k;
            int temp = lower_bound(a + i, a + n, index) - a;
            // cout << "temp = " << temp << endl;
            int x = temp - i - 1;
            count += x;
        }
        cout << count << endl;
    }
}