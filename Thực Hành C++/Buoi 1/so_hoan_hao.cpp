#include<iostream>
typedef long long ll;
using namespace std;
class Handle{
private:
    ll n;
public:
    void Input(){
        cin>>n;
    }
    ll Output(){
		if(n==6 || n==28 || n==496 || n==8128 || n == 33550336 || n==8589869056 || n==137438691328){
            return 1;
        }
        else return 0;
    }
};

int main(){
	int t;
	cin>>t;
	while(t--){
		Handle res;
        res.Input();
        cout << res.Output() << endl;
	}
}