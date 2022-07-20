#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
typedef long long ll;
using namespace std;
const int mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        int a[m+5][n+5];
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        vector<int>c;
        int start = 1;
        int hang = m;
        int cot = n;
        int x = 0;
        int k;
        vector<int>xuli;
        while(start <= m-1){
            for(int i = start; i <= cot; i++){
                c.push_back(a[start][i]);
                x++;
            }
            if(x == m*n){
                break;
            }
            for (int i = start + 1; i <= hang; i++)
            {
                c.push_back(a[i][cot]);
                x++;
            }
            if(x == m*n){
                break;
            }
            for (int i = cot - 1; i >= start; i--)
            {
                c.push_back(a[hang][i]);
                x++;
            }
            if(x == m*n){
                break;
            }
            for (int i = hang - 1; i >= start + 1; i--)
            {
                c.push_back(a[i][start]);
                x++;
            }
            if(x == m*n){
                break;
            }
            k = c[c.size()-1];
            c.insert(c.begin(),k);
            c.pop_back();
            for(int i = 0; i < c.size(); i++){
                xuli.push_back(c[i]);
            }
            c.clear();
            start++;
            hang--;
            cot--;
        }
        k = c[c.size()-1];
        c.insert(c.begin(),k);
        c.pop_back();
        for(int i = 0; i < c.size(); i++){
            xuli.push_back(c[i]);
        }
        int b[m+5][n+5];
        int gt = 1;
        hang = m;
        cot = n;
        int size = 0;
        while (gt <= x - 1){
            for (int i = gt; i <= cot; i++)
            {
               b[gt][i] =  xuli[size++] ;
            }
            if (size == m*n)
            {
                break;
            }
            for (int i = gt + 1; i <= hang; i++)
            {
                b[i][cot]= xuli[size++] ;
            }
            if (size == m*n)
            {
                break;
            }
            for (int i = cot - 1; i >= gt; i--)
            {
               b[hang][i]=xuli[size++] ;
            }
             if (size == m*n)
            {
                break;
            }
            for (int i = hang - 1; i >= gt + 1; i--)
            {
                b[i][gt]= xuli[size++] ;
            }
            if (size == m*n)
            {
                break;
            }
            gt++;
            hang--;
            cot--;
        }
        // for(int i =0; i < xuli.size(); i++){
        //     cout << xuli[i] << " ";
        // }
        for(int i = 1; i <= m ;i++){
            for(int j = 1; j <=n; j++){
                cout << b[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
//code by Duong