#include "Ngay.h"

istream& operator>>(istream& is, CNgay &p)
{
	cout << "Nhap vao nam: ";
	is >> p.Nam;
	do
	{
		cout << "Nhap vao thang: ";
		is >> p.Thang;
	} while (0 > p.Thang || p.Thang > 13);
	int ngay[2][12] = { { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	                    { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } };
	do
	{
		cout << "Nhap vao ngay: ";
		is >> p.Ngay;
	} while (0 > p.Ngay || p.Ngay > ngay[p.laNamNhuan()][p.Thang-1]);
	return is;
}
ostream& operator<<(ostream& os, CNgay p)
{
	os << p.Ngay << "/" << p.Thang << "/" << p.Nam;
	return os;
}

bool CNgay::operator>(CNgay a)
{
	if (this->Nam > a.Nam)
		return true;
	if (this->Thang > a.Thang&&this->Nam == a.Nam)
		return true;
	if (this->Ngay > a.Ngay&&this->Thang == a.Thang&&this->Nam == a.Nam)
		return true;
	return false;
}
bool CNgay::operator<(CNgay a)
{
	if (this->Nam < a.Nam)
		return true;
	if (this->Thang < a.Thang&&this->Nam == a.Nam)
		return true;
	if (this->Ngay < a.Ngay&&this->Thang == a.Thang&&this->Nam == a.Nam)
		return true;
	return false;
}

bool CNgay::operator==(CNgay a)
{
	if (this->Ngay == a.Ngay&&this->Thang == a.Thang&&this->Nam == a.Nam)
		return true;
	return false;
}
bool CNgay::operator!=(CNgay a)
{
	if (this->Ngay != a.Ngay||this->Thang != a.Thang||this->Nam != a.Nam)
		return true;
	return false;
}

bool CNgay::laNamNhuan()
{
	return (Nam % 4 == 0 && Nam % 100 != 0) || Nam % 400 == 0;
}

CNgay CNgay::homQua()
{
	int ngay[2][12] = { { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
						{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } };
	CNgay homQua;
	if (Ngay == 1 && Thang != 1)
	{
		homQua.Nam = Nam;
		homQua.Thang = Thang - 1;
		homQua.Ngay = ngay[laNamNhuan()][homQua.Thang - 1];
	}
	if (Ngay == 1 && Thang == 1)
	{
		homQua.Nam = Nam - 1;
		homQua.Thang = 12;
		homQua.Ngay = 31;
	}
	else
	{
		homQua.Nam = Nam;
		homQua.Thang = Thang;
		homQua.Ngay = Ngay - 1;
	}
	return homQua;
}

CNgay  CNgay::operator-(const int &a)
{
	CNgay ngay(*this);
	for (int i = 0; i < a; i++)
	{
		ngay = ngay.homQua();
	}
	return ngay;
}

CNgay CNgay::operator-=(const int &a)
{
	(*this) = (*this) - a;
	return *this;
}

CNgay::CNgay()
{
}


CNgay::~CNgay()
{
}
