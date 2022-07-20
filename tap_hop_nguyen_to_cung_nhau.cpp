#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)
ll n, m;
void Input() {
	cin >> n >> m;
}
void Solve() {
	ll sum = n*(n+1)/2;
	if((sum + m)%2) cout << "No";
	else {
		ll a = (sum + m)/2;
		ll b = sum - a;
		__gcd(a, b) == 1 ? cout << "Yes" : cout << "No";
	}
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