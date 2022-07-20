#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)
#define vi vector <int>
string a;
void Input() {
	cin >> a;
}
void Solve() {
	int s = a.size(), temp = 0, pos;
	vector <bool> mark(26);
	for (int i = 0; i < s; ++i) {
		if(!mark[a[i] - 'a']) {
			++temp;
			pos = i;
		}
		mark[a[i] - 'a'] = true;
	}
	deque <char> b;
	vi cnt('z' + 1, 0);
	for (int i = 0; i <= pos; ++i) {
		b.push_back(a[i]);
		++cnt[a[i]];
		while(cnt[b.front()] > 1) {
			--cnt[b.front()];
			b.pop_front();
		}
	}
	int ans = b.size();
	for (int i = pos+1; i < s; ++i) {
		b.push_back(a[i]);
		++cnt[a[i]];
		while(cnt[b.front()] > 1) {
			--cnt[b.front()];
			b.pop_front();
		}
		int sb = b.size();
		ans = min(ans, sb);
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