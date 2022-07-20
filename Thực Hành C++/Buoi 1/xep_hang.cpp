#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
struct danhdau{
    int start;
    int done;
};
bool cmp(struct danhdau a, struct danhdau b){
    return a.start < b.start;
}
int main(){
    struct danhdau m[105];
    int n;
    cin >> n;
    int res = n;
    int x = 0;
    while(n--){
        int a,b;
        cin >> a >> b;
        m[x].start = a;
        m[x].done = b;
        x++;
    }
    sort(m,m+x,cmp);
    int time = m[0].start + m[0].done;
    for(int i = 1; i < x; i++){
        if(time <= m[i].start){
            time = m[i].start + m[i].done;
        }
        else {
            time = time + m[i].done;
        }
    }
    cout << time;
    return 0;
}
//code by Duong