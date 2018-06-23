#define _CRT_SECURE_NO_WARNINGS
#include "TenTuoi.h"

int main()
{
	freopen("INPUT.txt", "rt", stdin);
	TenTuoi v;
	v.Nhap();
	freopen("OUTPUT.TXT", "wt", stdout);
	v.tinhTuoiLonNhat();
	return 0;
}