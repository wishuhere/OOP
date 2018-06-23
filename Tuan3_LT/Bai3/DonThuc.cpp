#include "DonThuc.h"

istream& operator>>(istream &is, CDonThuc &a)
{
	cout << "Nhap vao he so: ";
	is >> a.heSo;
	cout << "Nhap vao so mu: ";
	is >> a.soMu;
	return is;
}
ostream& operator<<(ostream &os, CDonThuc a)
{
	os << a.heSo << ".x^" << a.soMu;
	return os;
}
bool CDonThuc::operator>(CDonThuc a)
{
	if (soMu > a.soMu)
		return true;
	else
	{
		if (soMu == a.soMu)
		{
			if (heSo > a.heSo)
				return true;
		}
	}
	return false;
}
bool CDonThuc::operator<(CDonThuc a)
{
	if (soMu < a.soMu)
		return true;
	else
	{
		if (soMu == a.soMu)
		{
			if (heSo < a.heSo)
				return true;
		}
	}
	return false;
}

bool CDonThuc::operator==(CDonThuc a)
{
	return (heSo == a.heSo) && (soMu == a.soMu);
}

bool CDonThuc::operator!=(CDonThuc a)
{
	return (heSo != a.heSo) && (soMu != a.soMu);
}
CDonThuc CDonThuc::operator+(CDonThuc a)
{
	CDonThuc b;
	if (soMu != a.soMu)
	{
		cout << "Loi khong cung so mu.";
	}
	else
	{
		b.heSo = a.heSo + heSo;
		b.soMu = a.soMu;
	}
	return b;
}

CDonThuc CDonThuc::operator-(CDonThuc a)
{
	CDonThuc b;
	if (soMu != a.soMu)
	{
		cout << "Loi khong cung so mu.";
	}
	else
	{
		b.heSo = a.heSo - heSo;
		b.soMu = a.soMu;
	}
	return b;
}

CDonThuc CDonThuc::operator*(CDonThuc a)
{
	CDonThuc b;
	b.heSo = a.heSo * heSo;
	b.soMu = a.soMu + soMu;
	return b;
}

CDonThuc CDonThuc::operator/(CDonThuc a)
{
	CDonThuc b;
	b.heSo = (float)a.heSo / heSo;
	b.soMu = a.soMu - soMu;
	return b;
}

CDonThuc::CDonThuc()
{
}


CDonThuc::~CDonThuc()
{
}
