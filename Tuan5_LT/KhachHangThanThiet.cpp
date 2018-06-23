#include "KhachHangThanThiet.h"

void KhachHangThanThiet::Nhap()
{
	cin >> CMND;
	ngayDangKi.Nhap();
	cin >> Diem;
	cin >> capDoThanThiet;
}

string KhachHangThanThiet::getCMND()
{
	return CMND;
}

float KhachHangThanThiet::getDiem()
{
	return Diem;
}

int KhachHangThanThiet::getCapDo()
{
	return capDoThanThiet;
}

float KhachHangThanThiet::setDiem(const float &a)
{
	Diem = a;
	return Diem;
}

KhachHangThanThiet::KhachHangThanThiet()
{
}


KhachHangThanThiet::~KhachHangThanThiet()
{
}
