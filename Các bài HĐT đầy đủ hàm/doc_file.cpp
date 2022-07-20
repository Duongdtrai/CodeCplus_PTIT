#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class sinhvien
	{	protected:
			int ma;char ten[10];
		public:
			friend class nhom;
			void nhap()
				{	cout<<"\n nhap ma, ten: ";
					cin>>ma>>ten;
				}
			void xem()
				{	cout<<"\n "<<ma<<" "<<ten;}
	};
class nhom
	{	private:
			int manhom,ts;
			sinhvien dssv[100];
		public:
			void nhap()
				{	cout<<"\n nhap ma nhom, TS sinh vien:";
					cin>>manhom>>ts; sinhvien x;
					for(int i=0;i<ts;++i)
						dssv[i].nhap();
				}
			void xem()
				{	cout<<"\n danh sach sinh vien:";
					for(int i=0;i<ts;++i)
						dssv[i].xem();
				}
			void ghitep()
				{	fstream fg("d:\\nhom.dat",ios::out|ios::binary);
					fg.write(reinterpret_cast <char *> (this),sizeof(nhom));
					fg.close();
				}
			void doctep()
				{	fstream fd("d:\\nhom.dat",ios::in|ios::binary);
					fd.read(reinterpret_cast <char *> (this),sizeof(nhom));
					fd.close();
				}
	};
main()
	{	nhom d;
		d.nhap(); d.ghitep();
		nhom e;	e.doctep(); 
		cout<<"\n nhom e";e.xem();
    }
