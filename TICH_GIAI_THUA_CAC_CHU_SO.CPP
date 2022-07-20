#include <iostream>
#include <cmath>
#include <algorithm>
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int arr[10];
        for (int i = 0; i <= 9; i++){
            arr[i] = 0;
        }
        int n;
        cin >> n;
        char c;
        for (int i = 0; i < n; i++){
            cin >> c;
            if(c == '1') continue;
            if (c == '2' || c == '3' || c == '5' || c == '7')
                arr[c-48]++;
            else if (c == '4')
            {
                arr[2] = arr[2] + 2;
                arr[3]++;
            }
            else if (c == '6')
            {
                arr[3]++;
                arr[5]++;
            }
            else if (c == '8')
            {
                arr[2] = arr[2] + 3;
                arr[7]++;
            }
            else if (c == '9')
            {
                arr[3] = arr[3] + 2;
                arr[2]++;
                arr[7]++;
            }
        }
        for (int i = 9; i > 1; i--){
            while (arr[i] > 0)
            {
                cout << i;
                arr[i]--;
            }
        }
        cout  << endl;
    }
    return 0;
}
//code by Duong