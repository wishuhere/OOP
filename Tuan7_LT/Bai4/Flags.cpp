#include "Flags.h"

void CFlags::Nhap()
{
	cin >> Stripes;
}

void CFlags::Xuat()
{
	int a = 0, b = 2;
	unsigned int c = 0;
	for (int i = 1; i < Stripes; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	cout << c;
}

CFlags::CFlags()
{
}


CFlags::~CFlags()
{
}
