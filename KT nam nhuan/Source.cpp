#include "NgayThangNam.h"

int main()
{
	CNgayThangNam a;
	a.Nhap();
	a.Xuat();
	int b = a.kiemTraNamNhuan();
	int c = a.kiemTra();
	if (c == 1)
		cout << b;
	return 0;
}