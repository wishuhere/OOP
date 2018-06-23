#define _CRT_SECURE_NO_WARNINGS
#include "Vong.h"

int main()
{
	CVong a;
	freopen("INPUT.txt", "rt", stdin);
	a.Nhap();
	freopen("OUTPUT.txt", "wt", stdout);
	a.tinhNgay();
	a.Xuat();
	return 0;
}