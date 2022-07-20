#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;

int main()
{
    int size1 = 0;
    string s[1000];
    while ((cin >> s[size1])){
        size1++;
    }
    for (int j = 0; j < size1; j++){
        for (int k = 0; k < s[j].size(); k++){
            if (s[j][k] >= 'A' && s[j][k] <= 'Z')
                s[j][k] = s[j][k] + 32;
        }
    }
    s[0][0] = s[0][0] - 32;
    for (int j = 0; j < size1; j++){
        int kq = 0;
        for (int k = 0; k < s[j].size(); k++){
            if (s[j][k] == '.' || s[j][k] == '?' || s[j][k] == '!')
            {
                cout << endl;
                s[j + 1][0] = s[j + 1][0] - 32;
                kq = 1;
            }
            else
                cout << s[j][k];
        }
        if (kq == 0)
            cout << " ";
    }
    return 0;
}
//code by Duong