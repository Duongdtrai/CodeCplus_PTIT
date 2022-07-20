#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)
#define vi vector <int>


int n, m;
int a[100][100];

void Input() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
}

void Solve() {
	vi ans;
	int i = 0, j = -1;
	bool pos = true;
	while(i < n || j < m) {
		if(pos) {
			j = (i == n) ? j+2 : j+1;
			i = (i == n) ? n-1 : i;
			while(i >= 0 && j < m) {
				ans.push_back(a[i][j]);
				--i;
				++j;
			}
		}
		else {
			i = (j == m) ? i+2 : i+1;
			j = (j == m) ? m-1 : j;
			while(i < n && j >= 0) {
				ans.push_back(a[i][j]);
				++i;
				--j;
			}
		}
		pos = !pos;
	}
	for (int i = 0; i < ans.size(); ++i)
		cout << ans[i] << " ";
	cout << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}