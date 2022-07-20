#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define endl "\n"
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
char s[100][100];
int n, m;
pair<int,int> path[4] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
 
 
void ff(int i, int j){
	s[i][j] = '*';
	for(int k = 0; k < 4; k++){
		int i1 = i + path[k].first, j1 = j + path[k].second;
		if(i1 >=1 && i1 <= n && j1 >=1 && j1 <=m && s[i1][j1] == 'O'){
			ff(i1, j1);
		}
	}
}
 
 
void inp(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> s[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		if(s[i][1] == 'O') ff(i, 1);
		if(s[i][m] == 'O') ff(i, m);
	}
	for(int i = 1; i <=m; i++){
		if(s[1][i] == 'O') ff(1, i);
		if(s[n][i] == 'O') ff(n, i);
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(s[i][j] != '*'){
				cout << "X ";
			}
			else cout << "O ";
		}
		cout << endl;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int TC; cin >> TC;
	while(TC--){
		inp();
	}
	return 0;
}