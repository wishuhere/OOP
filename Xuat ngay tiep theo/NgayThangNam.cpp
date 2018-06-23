#include "NgayThangNam.h"

void CNgayThangNam::Nhap()
{
	cout << "Nhap vao ngay: ";
	cin >> Ngay;
	cout << "Nhap vao thang: ";
	cin >> Thang;
	cout << "Nhap vao nam: ";
	cin >> Nam;
}

void CNgayThangNam::Xuat()
{
	cout << "Ngay thang nam vua nhap: " << Ngay << "/" << Thang << "/" << Nam << endl;
}

int CNgayThangNam::kiemTra()
{
	if (Thang == 1 || Thang == 3 || Thang == 5 || Thang == 7 || Thang == 8 || Thang == 10 || Thang == 12)
	{
		if (0 < Ngay&&Ngay < 32)
			return 1;
		else return 0;
	}
	if (Thang == 4 || Thang == 6 || Thang == 9 || Thang == 11)
	{
		if (0 < Ngay&&Ngay < 31)
			return 1;
		else return 0;
	}
	if ((Nam % 400 == 0) || (Nam % 4 == 0 && Nam % 100 != 0))
	{
		if (Thang == 2)
		{
			if (0 < Ngay && Ngay < 30)
				return 1;
			else return 0;
		}
	}
	else
	{
		if (Thang == 2)
		{
			if (0 < Ngay && Ngay < 29)
				return 1;
			else return 0;
		}
	}
}

void CNgayThangNam::xuatRaNgayMai()
{
	int b = kiemTra();
	if (b == 0)
		cout << "Nhap sai.";
	else
	{
		if (Thang == 1 || Thang == 3 || Thang == 5 || Thang == 7 || Thang == 8 || Thang == 10 )
		{
			if (Ngay == 31)
				cout << "Ngay hom sau: 1/" << Thang + 1 << "/" << Nam;
			else cout << "Ngay hom sau: " << Ngay + 1 << "/" << Thang << "/" << Nam;

		}
		if (Thang == 12 && Ngay == 31)
			cout << "Ngay hom sau: 1/1/" << Nam + 1;
		else cout << "Ngay hom sau: " << Ngay + 1 << "/" << Thang << "/" << Nam;
		if (Thang == 4 || Thang == 6 || Thang == 9 || Thang == 11)
		{
			if (Ngay == 30)
				cout << "Ngay hom sau: 1/" << Thang + 1 << "/" << Nam;
			else cout << "Ngay hom sau: " << Ngay + 1 << "/" << Thang << "/" << Nam;
		}
		if ((Nam % 400 == 0) || (Nam % 4 == 0 && Nam % 100 != 0))
		{
			if (Thang == 2)
			{
				if (Ngay == 29)
					cout << "Ngay hom sau: 1/3/" << Nam;
				else cout << "Ngay hom sau: " << Ngay + 1 << "/" << Thang << "/" << Nam;
			}
		}
		else
		{
			if (Thang == 2)
			{
				if (Ngay == 28)
					cout << "Ngay hom sau: 1/3/" << Nam;
				else cout << "Ngay hom sau: " << Ngay + 1 << "/" << Thang << "/" << Nam;
			}
		}
	}
}

CNgayThangNam::CNgayThangNam()
{
}


CNgayThangNam::~CNgayThangNam()
{
}
