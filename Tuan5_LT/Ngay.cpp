#include "Ngay.h"

void CNgay::Nhap()
{
	string temp;
	cin >> temp;
	int dem = 0;
	string a;
	for (int i = 0;; i++)
	{
 		if (temp[i] != '/')
		{
			a += temp[i];
			dem++;
		}
		else break;
	}
	Ngay = stoi(a);
	dem++;
	a = "";
	for (int i = dem;; i++)
	{
		if (temp[i] != '/')
		{
			a += temp[i];
			dem++;
		}
		else break;
	}
	Thang = stoi(a);
	dem++;
	a = "";
	for (int i = dem;; i++)
	{
		if (temp[i] != '/' && temp[i] != '\0' && !cin.eof())
		{
			a += temp[i];
			dem++;
		}
		else break;
	}
	Nam = stoi(a);
}

void CNgay::Xuat()
{
	cout << Ngay << "/" << Thang << "/" << Nam;
}

CNgay::CNgay()
{
}


CNgay::~CNgay()
{
}
