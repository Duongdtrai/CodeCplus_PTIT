#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int check[1000000];
void sang(){
	for(int i = 2; i <= 1000;i++){
		if(check[i] == 1){
			for(int j = i*i; j <= 1000000;j=j+i){
				check[j] = 0;
			}
		}	
	}
}
int main(){	
    check[0] = 0;
	check[1] = 0;
	for(int i = 2; i <= 1000000;i++) {
		check[i] = 1;
	}
	sang();
    int a,b;
    cin >> a >> b;
    if( a > b){
        swap(a,b);
    }
    for(int i = a+1 ; i < b; i++){
        if(check[i] == 1){
            cout << i << " ";
        }
    }
    return 0;
}