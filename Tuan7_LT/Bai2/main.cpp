#define _CRT_SECURE_NO_WARNINGS
#include "Bia.h"

int main()
{
	CBia a;
	freopen("INPUT.txt", "rt", stdin);
	a.Nhap();
	freopen("OUTPUT.txt", "wt", stdout);
	a.tinhBia();
	a.Xuat();
	return 0;
}