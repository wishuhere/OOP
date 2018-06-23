#include "PhanSo.h"

int main()
{
	cout << "Nhap vao 2 phan so." << endl;
	PhanSo a;
	a.Nhap();
	PhanSo b;
	b.Nhap();
	cout << "Nhap vao phep tinh giua 2 phan so vua nhap." << endl;
	cout << "1: Cong" << endl;
	cout << "2: Tru" << endl;
	cout << "3: Nhan" << endl;
	cout << "4: Chia" << endl;
	cout << "5: Thoat" << endl;
	int lua_chon1;
	do
	{
		cout << "ban chon: ";
		cin >> lua_chon1;
		switch (lua_chon1)
		{
		case 1:
		{
				  PhanSo c = a.cong(b);
				  c.rutGon();
				  cout << "Tong cua phep tinh: "; c.Xuat();
				  break;
		}
		case 2:
		{
				  PhanSo c = a.tru(b);
				  c.rutGon();
				  cout << "Hieu cua phep tinh: "; c.Xuat();
				  break;
		}
		case 3:
		{
				  PhanSo c = a.nhan(b);
				  c.rutGon();
				  cout << "Tich cua phep tinh: "; c.Xuat();
				  break;
		}
		case 4:
		{
				  PhanSo c = a.chia(b);
				  c.rutGon();
				  cout << "Thuong cua phep tinh: "; c.Xuat();
				  break;
		}
		case 5: break;
		}
	} while (lua_chon1 != 5);

	PhanSo d;
	cout << "\n";
	d.Nhap();
	int n;
	cout << "Nhap vao so nguyen can tinh: ";
	cin >> n;
	cout << "Nhap vao phep tinh giua phan so voi so nguyen vua nhap." << endl;
	cout << "1: Cong" << endl;
	cout << "2: Tru" << endl;
	cout << "3: Nhan" << endl;
	cout << "4: Chia" << endl;
	cout << "5: Thoat" << endl;
	int lua_chon2;
	do
	{
		cout << "ban chon: ";
		cin >> lua_chon2;
		switch (lua_chon2)
		{
		case 1:
		{
				  PhanSo c = d.congVoiSoNguyen(n);
				  c.rutGon();
				  cout << "Tong cua phep tinh: "; c.Xuat();
				  break;
		}
		case 2:
		{
				  PhanSo c = a.truVoiSoNguyen(n);
				  c.rutGon();
				  cout << "Hieu cua phep tinh: "; c.Xuat();
				  break;
		}
		case 3:
		{
				  PhanSo c = a.nhanVoiSoNguyen(n);
				  c.rutGon();
				  cout << "Tich cua phep tinh: "; c.Xuat();
				  break;
		}
		case 4:
		{
				  PhanSo c = a.chiaVoiSoNguyen(n);
				  c.rutGon();
				  cout << "Thuong cua phep tinh: "; c.Xuat();
				  break;
		}
		case 5: break;
		}
	} while (lua_chon2 != 5);
	return 0;
}