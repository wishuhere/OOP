#define _CRT_SECURE_NO_WARNINGS
#include "SieuThi.h"

int main()
{
	SieuThi a;
	string cmnd;
	float tienMuaHang;
	freopen("INPUT.txt", "rb", stdin);
	while (!cin.eof())
	{
		a.Nhap();
	}
	cin.clear();

	freopen("CON", "rb", stdin);
	cout << "Nhap vao so CMND: ";
	cin >> cmnd;
	cout << "Nhap vao so tien mua hang: ";
	cin >> tienMuaHang;
	a.tinhTien(cmnd, tienMuaHang);
	cout << endl;
	cout << "-----Menu cap nhap diem cho khach hang-----" << endl;
	cout << "1: Cap nhap diem tich luy." << endl;
	cout << "2: Thoat." << endl;
	int lua_chon;
	do
	{
	cout << "Lua chon cua ban: ";
	cin >> lua_chon;
	} while (lua_chon != 1 || lua_chon != 2);
	switch (lua_chon)
	{
	case 1:
	{
			  string cmnd1;
			  float tien;
			  cout << "Nhap vao cmnd: ";
			  cin >> cmnd1;
			  cout << "Nhap vao tien mua hang: ";
			  cin >> tien;
			  freopen("INPUT.txt", "wt", stdout);
			  a.capNhapDiem(cmnd1, tien);
			  break;
	}
	case 2: break;
	}
	//freopen("OUTPUT.txt", "wt", stdout);
	return 0;
}