#include"Day2016.h"

int main()
{
	cout << "Moi nhap chuc nang. " << endl;
	cout << "1: Chuyen ngay trong nam thanh ngay thang." << endl;
	cout << "2: Chuyen ngay thang thanh ngay trong nam." << endl;
	cout << "3: Tinh thu tu ngay trong nam." << endl;
	cout << "4: Thoat.";
	int lua_chon;
	do {
		cin >> lua_chon;
	} while (lua_chon > 4 || lua_chon < 0);
	switch (lua_chon)
	{
	case 1:
	{
			  Day2016 a;
			  cin >> a;
			  a.xuatThuNgayThangNam(a);
			  break;
	}
	case 2:
	{	Day2016 a(1, 1);
		int n;
		cin >> n;
		a.xuatThuNgay(n);
	}
	case 3:
	{
			  cout << "Ham chua duoc cai dat.";
	}
	case 4:
		break;
}
	return 0;
}