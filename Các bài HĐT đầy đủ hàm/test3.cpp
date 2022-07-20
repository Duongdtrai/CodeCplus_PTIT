#include <iostream>
using namespace std;
class phanso
	{	private:
			int tu,mau;
		public:
			phanso() {}
			phanso(float in)
				{	tu=int(in);mau=1;
					while ((in-float(int(in)))!=0)
						{	in=in*10.0;
							tu=int(in);
							mau=mau*10;
						}
				}
			operator float()
				{	float x;
					x=float(tu)/float(mau);
					return x;
				}
			void nhap()
				{cout<<"\n nhap tu, mau:";cin>>tu>>mau;}
			void xem()
				{cout<<" "<<tu<<"/"<<mau;}
			friend phanso operator ~(phanso);
			friend phanso operator + (phanso a,phanso b); 
	};
phanso operator + (phanso a,phanso b) 
	{	phanso c;
		c.tu=a.tu*b.mau+b.tu*a.mau;
		c.mau=a.mau*b.mau;
		return c;
	}     
phanso operator ~(phanso a)
	{	phanso c;
		c.tu=a.mau;c.mau=a.tu;
		return c;
	}


main()
	{	phanso a,b,c;
		cout<<"\n a= ";a.nhap(); 
		cout<<"\n b= ";b.nhap();
		c=a+b; 
		cout<<"\n c= ";c.xem();  
		c=~a;
		cout<<"\n c=~a=";c.xem();
		c=phanso(1.78);
		cout<<"\n c=phanso(1.78)=";c.xem();
		cout<<"\n float(c)="<<float(c);
	}
