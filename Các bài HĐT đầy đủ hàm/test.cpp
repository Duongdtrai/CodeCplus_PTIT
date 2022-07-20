#include <iostream>
using namespace std;
 
class thoigian{
	private:
		int ngay;
		int gio;
	public:

	void nhapbp() {
		cin >> ngay >> gio;
	}
	void xemmh() {
		cout << "ngay: " << ngay << ", gio: " << gio << endl;
	}
	void rutgon() {
		ngay += gio/24;
		gio %= 24;
	}

	thoigian(){

	}
	thoigian(int a, int b){
		this->ngay = a; 
		this->gio = b;
	}
	thoigian(string s){
		int hour;
		int sum = 0;
		int pos = 0;
		for(int i = 0; i < s.length(); i++){
			if(s[i] >= '0' &&  s[i] <= '9'){
				int x = s[i] - 48;
				sum = sum*10+ x;
				if(pos == 100){pos = 1;}
			}
			else{
				if(pos == 0){
					ngay = sum;
					sum = 0;
					pos = 100;
				}
				if(pos == 1){
					gio = sum;
					break;
				}
			}
		}
	}
	// char* operatorchar*(thoigian x);

    friend thoigian operator+(thoigian a, thoigian y);
    friend thoigian operator-(thoigian a, thoigian y);
    friend thoigian operator*(thoigian a, int y);
    friend thoigian operator/(thoigian a, int y);

    
};
thoigian operator+(thoigian a, thoigian y){
    thoigian temp;
    int t = a.ngay*24+a.gio;
    int m = y.ngay*24+y.gio;
	temp.ngay = (t+m)/24;
	temp.gio = (t+m)%24;
	return temp;
}
thoigian operator-(thoigian a, thoigian y){
	thoigian temp;
    int t = a.ngay*24+a.gio;
    int m = y.ngay*24+y.gio;
	temp.ngay = (t-m)/24;
	temp.gio = (t-m)%24;
	return temp;
}
thoigian operator*(thoigian a, int y){
	thoigian temp;
	temp.ngay = a.ngay*y;
	temp.gio = a.gio*y;
    temp.rutgon();
	return temp;
}
thoigian operator/(thoigian a, int y){
	thoigian temp;
	temp.ngay = a.ngay/y;
	temp.gio = a.gio/y;
    temp.rutgon();
	return temp;
}
int main(){
	thoigian a, b(2,10), c;
	a.nhapbp();
    a.rutgon(); 
    a.xemmh();
	c=a+b;
    c.xemmh(); 
    c=a-b; 
    c.xemmh();
	c=a*2; 
    c.xemmh(); 
    c=a/2; 
    c.xemmh();
	a=thoigian("200ngay 20gio"); 
	a.xemmh();
	// cout<<"\n"<<(char*)(b);
}