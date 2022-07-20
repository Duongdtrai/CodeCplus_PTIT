#include <iostream>
using namespace std;
class chunhat
{
protected:
    int dai, rong;

public:
    chunhat(){
        dai = 0;
        rong = 0;
    }
    chunhat(int d, int r)
    {
        dai = d;
        rong = r;
        cout << "\n tao CN";
    }
    void xem()
    {
        cout << " dai=" << dai << " rong=" << rong;
    }
    int chuvi()
    {
        return (dai + rong) * 2;
    }
    ~chunhat()
    {
        cout << "\n huy bo chu nhat";
    }
};
class vuong : private chunhat
{
public:
    vuong() : chunhat()
    {
    }
    vuong(int c) : chunhat(c, c)
    {
        cout << "\n tao vuong";
    }
    void xem()
    {
        cout << " canh=" << dai;
        cout << " chu vi " << chuvi();
    }
    ~vuong()
    {
        cout << "\n huy bo vuong";
    }
};
main()
{
    vuong y(20);
    cout << "\n y: ";
    y.xem();
    //		cout<<"\n chu vi y:"<<y.chuvi();
}
