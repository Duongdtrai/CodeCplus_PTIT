#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const int nMax = 1e7 + 1;

int n, k, cnt;
int a[nMax];

void Input() {
    cin >> n >> k;
    cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] <= k)
            ++cnt;
    }
}

void Solve() {
    int bad = 0;
    for (int i = 0; i < cnt; ++i)
        if(a[i] > k)
            ++bad;
    int ans = bad;
    for (int i = cnt; i < n; ++i) {
        if(a[i] > k && a[i-cnt] <= k)
            ++bad;
        else if(a[i] <= k && a[i-cnt] > k)
            --bad;
        ans = min(ans, bad);
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--){
        Input();
        Solve();
    }
    return 0;
}
// code by Dương