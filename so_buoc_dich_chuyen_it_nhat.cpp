#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)

const int nMax = 1e3 + 1;

int n;
int a[nMax];

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
}

void Solve() {
	int dp[n] = {0};
	dp[0] = 0;
	for (int i = 0; i < n; ++i) {
		int r = min(n, i + a[i] + 1);
		for (int j = i+1; j < r; ++j)
			if(!dp[j])
				dp[j] = dp[i] + 1;
	}
	cout << dp[n-1] << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}