#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)


int I[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int J[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n, m;
int a[100][100];

void Input() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
}

void Try(int i, int j) {
	if(a[i][j]) {
		a[i][j] = 0;
		for (int k = 0; k < 8; ++k) {
			int inext = i + I[k];
			int jnext = j + J[k];
			if(inext < n && jnext < m && inext >= 0 && jnext >= 0)
				Try(inext, jnext);
		}
	}
}

void Solve() {
	int ans = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if(a[i][j]) {
				++ans;
				Try(i, j);
			}
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