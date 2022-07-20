#include <bits/stdc++.h>
#define IOS()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9 + 7;

string a;

void Input(){
    getline(cin,a);
}

void Solve(){
    vector<pair<char,int>>arr;
    arr.push_back({'@',-1});
    int maxsize = 0;
    for(int i = 0; i < a.size(); i++){
        arr.push_back({a[i],i});
        while (arr.size() >= 3 && arr[arr.size()-3].first == '1'&& arr[arr.size()-2].first == '0'&& arr[arr.size()-1].first == '0'){
            arr.pop_back();
            arr.pop_back();
            arr.pop_back();
        }
        int tmp =  arr.back().second;
        maxsize = max(maxsize,i-tmp);
    }
    cout << maxsize << endl;
}

int main()
{
    IOS()
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        Input();
        Solve();
    }
    return 0;
}

// Code by Nu