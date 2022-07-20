#include <iostream>
#include <cmath>
#include <algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;
int solve(string s){
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
        {
            int x = (s[i] - 48);
            if (x % 8 == 0 && x % 3 != 0)
            {
                dem++;
            }
        }
        for (int i = 0; i < s.size() - 1; i++)
        {
            int x = (s[i] - 48) * 10 + (s[i + 1] - 48);
            if (x % 8 == 0 && x % 3 != 0)
            {
                dem++;
            }
        }
        for (int i = s.size() - 3; i >= 0; i--)
        {
            int x = (s[i] - 48) * 100 + (s[i + 1] - 48) * 10 + (s[i + 2] - 48);
            if (x % 8 == 0)
            {
                int sum = (s[i] - 48) + (s[i + 1] - 48) + (s[i + 2] - 48);
                if (sum % 3 != 0) dem++;
                for (int j = i - 1; j >= 0; j--){
                    sum = sum + s[j] - 48;
                    if (sum % 3 != 0)
                        dem++;
                }
            }
        }
        return dem;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}
//code by Duong