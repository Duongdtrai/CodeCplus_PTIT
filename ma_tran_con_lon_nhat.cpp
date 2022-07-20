#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)


int n, m;
int a[500][500];

void Input() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
}

void Solve() {
	int dp[n][m];
	for (int i = 0; i < n; ++i)
		dp[i][0] = a[i][0];
	for (int j = 0; j < m; ++j)
		dp[0][j] = a[0][j];
	int ans = 0;
	for (int i = 1; i < n; ++i)
		for (int j = 1; j < m; ++j)
			if(a[i][j]) {
				dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
				ans = max(ans, dp[i][j]);
			}
			else dp[i][j] = 0;
	cout << ans << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}