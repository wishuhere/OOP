#include "Day2016.h"

//Ngay 1/1/2016 la thu sau
//Xuat thu ngay thang nam
void Day2016::xuatThuNgayThangNam(Day2016 a)
{
	int d[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int demNgay = 0;
	for (int i = 0; i < a.month - 1; i++)
	{
		demNgay += d[i];
	}
	if (a.month == 2)
	{
		demNgay += a.day;
	}
	else demNgay += a.day - 1;
	switch (demNgay % 7)
	{
	case 0:
	{
			  cout << "Thu Sau";
			  break;
	}
	case 1:
	{
			  cout << "Thu Bay";
			  break;
	}
	case 2:
	{
		cout << "Chu Nhat";
		break;
	}
	case 3:
	{
		cout << "Thu Hai";
		break;
	}
	case 4:
	{
		cout << "Thu Ba";
		break;
	}
	case 5:
	{
		cout << "Thu tu";
		break;
	}
	case 6:
	{
		cout << "Thu Nam";
		break;
	}
	}
	if (a.month == 2)
		cout << ", ngay " << a.day << ", thang " << a.month << ", nam 2016 va la ngay thu " << demNgay << " trong nam.";
	else
		cout << ", ngay " << a.day << ", thang " << a.month << ", nam 2016 va la ngay thu " << demNgay + 1 << " trong nam.";
}

//Nhap gia tri ngay trong nam xuat ra thu ngay
void Day2016::xuatThuNgay(int n)
{
	int m = n;
	int d[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for (int i = 0; i < 12; i++)
	{
		if (m>d[i])
			m -= d[i];
		else
		{
			day = m;
			month = i + 1;
			break;
		}
	}
	if (month != 2)
		n --;
	switch (n % 7)
	{
	case 0:
	{
			  cout << "Thu Sau";
			  break;
	}
	case 1:
	{
			  cout << "Thu Bay";
			  break;
	}
	case 2:
	{
			  cout << "Chu Nhat";
			  break;
	}
	case 3:
	{
			  cout << "Thu Hai";
			  break;
	}
	case 4:
	{
			  cout << "Thu Ba";
			  break;
	}
	case 5:
	{
			  cout << "Thu tu";
			  break;
	}
	case 6:
	{
			  cout << "Thu Nam";
			  break;
	}
	}
	cout << ", ngay " << day << ", thang " << month << ", nam 2016 " ;
}

//Nhap vao ngay va so ngay sau do xuat ra ngay thang nam
//void Day2016::xuatNhapvaoNgayVaSoNgaySauDo(Day2016 a, int n)
//{
//
//}

//Toan tu gan
istream &operator>>(istream &is, Day2016 &a)
{
	int d[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	do
	{
		cout << "Nhap vao thang: ";
		is >> a.month;
	} while (a.month<1 || a.month>12);
	do
	{
		cout << "Nhap vao ngay: ";
		is >> a.day;
	} while (0 > a.day || a.day > d[a.month - 1]);
	return is;
}
//Khoi tao
Day2016::Day2016(int n)
{
	int d[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for (int i = 0; i < 12; i++)
	{
		if (n>d[i])
			n -= d[i];
		else
		{
			day = n;
			month = i + 1;
			break;
		}
	}
}

Day2016::Day2016(int a, int b)
{
	int d[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (a<0 || a>d[b - 1])
		cout << "Nhap sai";
	else
	{
		day = a;
		month = b;
	}
}

Day2016::Day2016()
{
	day = 1;
	month = 1;
}


Day2016::~Day2016()
{
}
