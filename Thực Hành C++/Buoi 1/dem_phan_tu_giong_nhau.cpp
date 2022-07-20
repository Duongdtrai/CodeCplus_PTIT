#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5][n + 5];
        vector<int> b;
        for (int i = 0; i < 100002; i++)
        {
            b.push_back(1);
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                if (b[a[i][j]] == i)
                {
                    b[a[i][j]]++;
                }
            }
        }
        int dem = 0;
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == n + 1)
            {
                dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}
//code by Duong