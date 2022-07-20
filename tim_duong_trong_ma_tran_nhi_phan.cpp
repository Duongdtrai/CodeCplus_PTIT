#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll M = 1005;
typedef pair<int, int> ii;
typedef pair<pair<int, int>, int> iii;

int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, 1, -1};

int n, m;
int a[M][M];

bool visited[M][M];

int bfs(ii s, ii t){
	if(a[s.second][s.first]==0 || a[t.second][t.first]==0){
		return -1;
	}
	queue<iii> q;
//	cout<<x2<<" "<<y2<<endl;
	
	q.push(iii(s, 0));
	visited[s.second][s.first] = true;
	
	while(!q.empty()){
		iii u = q.front();
//		cout<<"u: "<<u.first.first<<" "<<u.first.second<<" "<<u.second<<endl;
		q.pop();
		
		for(int i=0; i<4; i++){
			int x = u.first.first + dx[i];
			int y = u.first.second + dy[i];
			if(x>=0 && x<m && y>=0 && y<n && !visited[y][x] && a[y][x]==1){
				visited[y][x]=true;
				q.push(iii(ii(x, y), u.second+1));
//				cout<<"("<<x<<", "<<y<<")"<<endl;
				if(y==t.second && x==t.first){
					return u.second+1;
				}
			}
		}
	}
	return -1;
}

void solve(){
	int x1, x2, y1, y2;
	cin>>n>>m>>y1>>x1>>y2>>x2;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
			visited[i][j]=false;
		}
	}
	ii s = ii(x1, y1);
	ii t = ii(x2, y2);
	cout<<bfs(s, t)<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int check;
	cin>>check;
	while(check--){
		solve();
	}
}