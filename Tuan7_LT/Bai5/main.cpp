#define _CRT_SECURE_NO_WARNINGS
#include"Race.h"
int main()
{
	freopen("INPUT.TXT", "rt", stdin);
	CRace a;
	a.Nhap();
	freopen("OUTPUT.TXT", "wt", stdout);
	a.Xuat();
	return 0;
}