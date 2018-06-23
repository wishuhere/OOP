#define _CRT_SECURE_NO_WARNINGS
#include "Flags.h"

int main()
{
	CFlags a;
	freopen("INPUT.txt", "rt", stdin);
	a.Nhap();
	freopen("OUTPUT.txt", "wt", stdout);
	a.Xuat();
	return 0;
}