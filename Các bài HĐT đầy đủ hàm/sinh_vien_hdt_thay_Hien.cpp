#include<bits/stdc++.h>
using namespace std;
class diemsv: public sinhvien
	{	private:
			int diem; char xeploai[10];
		public:
			friend class bangdiem;
			void nhap()
				{ sinhvien::xem();cout<<" diem: ";cin>>diem;}
			void ketqua()
				{	if (diem>=4) 
						strcpy(xeploai,"qua");
					else
						strcpy(xeploai,"hoc lai");
				}
			void xem()
				{ 	sinhvien::xem();
					cout<<" "<<diem<<" "<<xeploai;
				}
	};
class bangdiem
	{	private:
			int manhom;
			vector <diemsv> dsdiem;
		public:
			bangdiem(){}
			bangdiem(nhom d)
				{	manhom=d.manhom;
					diemsv x;
					for(int i=0;i<d.dssv.size();++i)
						{	x.ma=d.dssv[i].ma;
							strcpy(x.ten,d.dssv[i].ten);
							dsdiem.push_back(x);
						}
				}
			void nhap()
				{	cout<<"\n nhap diem nhom "<<manhom;
					for(int i=0;i<dsdiem.size();++i)
						{	dsdiem[i].nhap();
							dsdiem[i].ketqua();
						}
				}
			void xem()
				{	cout<<"\n xem diem nhom "<<manhom;
					for(int i=0;i<dsdiem.size();++i)
						dsdiem[i].xem();
				}
			
	};
main()
	{	nhom d;
		d.nhap();d.xem();
		bangdiem e(d);
		e.nhap;
        e.xem(); 
    }

