#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
class lecturer{
public:
	string name_business;
    string business;
    int number;
};
bool cmp(class lecturer a, class lecturer b){
    return a.number > b.number;
}
void nhap(class lecturer &a){
    cin >> a.business;
    scanf("\n");
	getline(cin, a.name_business);
    cin >> a.number;
}
 
void in(class lecturer a[2005],int n){
    sort(a,a+n,cmp);
    for(int i = 0;i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i].number == a[j].number){
                if(a[i].business > a[j].business){
                    swap(a[i],a[j]);
                }
            }
        }
    }
    for(int i = 0;i < n; i++){
        cout << a[i].business <<" " << a[i].name_business << " " << a[i].number << endl;
    }
	
}
int main(){
	class lecturer a[2005];
	int n; cin >> n;
	for(int i=0; i < n; i++){
		nhap(a[i]);
	}
	in(a,n);
	return 0;
}
// code by Duong