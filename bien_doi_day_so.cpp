#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+5];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int left = 0;
        int right = n - 1;
        int count = 0;
        while(left <= right){
            if(a[left] == a[right]){
                left++;
                right--;
            }
            else if(a[left] < a[right]){
                left++;
                count++;
                a[left] = a[left] + a[left-1];
            }
            else if(a[left] > a[right]){
                right--;
                count++;
                a[right] = a[right] + a[right+1];
            }
        }
        cout << count << endl;
    }
    return 0;
}
