#include "KhachHangThuong.h"

void KhachHangThuong::Nhap(string a)
{
	ms = a;
	cin >> CMND;
	ngayDangKi.Nhap();
	cin >> Diem;
}

string KhachHangThuong::getCMND()
{
	return CMND;
}

float KhachHangThuong::getDiem()
{
	return Diem;
}

float KhachHangThuong::setDiem(const float &a)
{
	Diem = a;
	return Diem;
}

KhachHangThuong::KhachHangThuong()
{
}


KhachHangThuong::~KhachHangThuong()
{
}
