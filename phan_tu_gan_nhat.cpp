#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int z, n, k, x;
    cin >> z;
    while(z--){
        cin >> n;
        vector<int> s(n);
        int j = 0, l, r;
        for( int i = 0; i < n; i++)    cin >> s[i];
        cin >> k >> x;
        //sort( a.begin(), a.end());
        l = lower_bound( s.begin(), s.end(), x) - s.begin();
        for( int i = l - k/2; i < l; i++)   cout << s[i] << ' ';
        if( s[l] == x) r = l+1;
        else r = l;
        for( int i = r; i < r + k/2; i++)   cout << s[i] << ' ';
        cout << '\n';
    }
}