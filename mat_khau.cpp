#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    string s;
    vector<string> v;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>s;
        v.emplace_back(s);
    }
    int len=v.size(),x,y,leng1,leng2;
    for(int i=0;i<len-1;i++){
        leng1=v[i].size();
        for(int j=i+1;j<len;j++){
            if(v[i]==v[j]) cnt+=2;
            else{
                leng2=v[j].size();
                if(leng1>leng2){
                    x=v[i].find(v[j]);
                    if(x>=0) cnt++;
                }else{
                    y=v[j].find(v[i]);  
                    if(y>=0) cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}