// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main () {
//     int myints[] = {10,20,30,30,20,10,10,20};
//     vector<int> v(myints,myints+8); // 10 20 30 30 20 10 10 20
//     vector<int>::iterator low,up;
//     sort (v.begin(), v.end()); // 10 10 10 20 20 20 30 30
//     low=lower_bound (v.begin(), v.end(), 20); // ^
//     up= upper_bound (v.begin(), v.end(), 20); // ^
//     cout << "lower_bound at position " << int(low- v.begin()-1) << endl;
//     cout << "upper_bound at position " << int(up - v.begin()) << endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 123;
    string s = to_string(n);
    cout << "Type string: " << s << endl;
    n = stoi(s);
    cout << "Type INT: " << n << endl;
    set<int>a;
    return 0;
}