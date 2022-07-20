#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll mod = 1e9 + 7;

void input(vector<string>& HL)
{
    ifstream fin("DATA.in");
    while (!fin.eof())
    {
        string s;
        getline(fin, s);
        HL.push_back(s);
    }
    fin.close();
}
void output(vector<string> HL)
{
    vector<ll> soA;
    vector<ll> soB;
    for(int i = 1; i < HL.size(); i++){
        if(i == 1){
            stringstream ss(HL[i]);
            string tmp;
            while (ss >> tmp){
                string num = tmp;
                int x = stoi(num);
                soA.push_back(x);
            }
        }
        else if(i == 2){
            stringstream s2(HL[i]);
            string tmp;
            while (s2 >> tmp){
                string num = tmp;
                int x = stoi(num);
                soB.push_back(x);
            }
        }   
    }
    set<int>res;
    for(int i = 0; i<soA.size(); i++){
        for(int j=0; j<soB.size(); j++){
            if(soA[i] == soB[j]){
                res.insert(soA[i]);
                break;
            }
        }
    }
    for(auto i:res){
        cout << i << " ";
    }
}
int main()
{

    vector<string> HL;
    input(HL);
    output(HL);
    return 0;
}
// code by Duong