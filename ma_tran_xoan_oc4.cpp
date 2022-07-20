#include <iostream>
#include <cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
const int mod = 10e9 + 7;
int main(){
        ll x;
        cin >> x;
        ll a[x + 5][x + 5];
        ll c[x * x + 5];
        ll size = 0;
        ll y = 0;
        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= x; j++)
            {
                cin >> a[i][j];
                c[y++] = a[i][j];
            }
        }
        ll hang = x;
        ll cot = x;
        ll gt = 1;
        ll b[x+5][x+5];
        sort(c,c+y);
        while (gt <= x - 1){
            for (int i = gt; i <= cot; i++)
            {
               b[gt][i] =  c[size++] ;
            }
            if (size == y)
            {
                break;
            }
            for (int i = gt + 1; i <= hang; i++)
            {
                b[i][cot]= c[size++] ;
            }
            if (size == y)
            {
                break;
            }
            for (int i = cot - 1; i >= gt; i--)
            {
               b[hang][i]= c[size++] ;
            }
             if (size == y)
            {
                break;
            }
            for (int i = hang - 1; i >= gt + 1; i--)
            {
                b[i][gt]= c[size++] ;
            }
            if (size == y)
            {
                break;
            }
            gt++;
            hang--;
            cot--;
        }
        for (int i = 1; i <= x; i++){
            for(int j = 1; j <= x;j++ ){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    return 0;
}