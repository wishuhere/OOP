#include "ThoiGian.h"

istream& operator>>(istream& is, CThoiGian &p)
{
	cout << "Nhap vao so gio: ";
	is >> p.Gio;
	cout << "Nhap vao so phut: ";
	is >> p.Phut;
	cout << "Nhap vao so giay: ";
	is >> p.Giay;
	return is;
}

ostream& operator<<(ostream& os, CThoiGian p)
{
	cout << "Thoi gian da nhap vao: ";
	os << p.Gio << ":" << p.Phut << ":" << p.Giay;
	return os;
}


CThoiGian::CThoiGian()
{
}


CThoiGian::~CThoiGian()
{
}
