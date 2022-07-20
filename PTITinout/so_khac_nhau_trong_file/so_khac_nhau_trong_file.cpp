#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll mod = 1e9 + 7;
class danhdau
{
public:
    ll number;
    ll lan;
};
bool cmp(class danhdau a, class danhdau b)
{
    return a.number < b.number;
}
void input(vector<string>& HL)
{
    ifstream fin("DATA.in");
    while (!fin.eof())
    {
        string s;
        fin >> s;
        HL.push_back(s);
    }
    fin.close();
}
void output(vector<string> HL, vector<ll> so, danhdau a[], ll &size)
{
    for (ll i = 0; i < HL.size() - 1; i++)
    {
        ll b = 0;
        for (ll j = 0; j < HL[i].size(); j++)
        {
            b = b * 10 + HL[i][j] - 48;
        }
        so.push_back(b);
    }

    for (ll i = 0; i < so.size(); i++)
    {
        ll ok = 0;
        for (ll j = 0; j < size; j++)
        {
            if (a[j].number == so[i])
            {
                a[j].lan++;
                ok = 1;
                break;
            }
        }
        if (ok == 0)
        {
            a[size].number = so[i];
            a[size].lan = 1;
            size++;
        }
    }
}
int main()
{

    vector<string> HL;
    input(HL);
    ll size = 0;
    danhdau a[100000];
    vector<ll> so;
    output(HL, so, a, size);
    sort(a, a + size, cmp);
    for (ll i = 0; i < size; i++)
    {
        cout << a[i].number << " " << a[i].lan << endl;
    }
    return 0;
}
// code by Duong