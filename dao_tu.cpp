#include <sstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
vector<string> daotu;
void Solve(string s)
{
    stringstream p(s);
    string temp;

    while (p >> temp)
    {
        daotu.push_back(temp);
    }
}
void out(){
    for (int i = daotu.size() - 1; i >= 0; i--){
        cout << daotu[i] << " ";
    }
    cout << endl;
    daotu.clear();
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        Solve(s);
        out();
    }
    return 0;
}
// code by Dương