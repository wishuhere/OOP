#pragma once
#include "KhachHang.h"
class KhachHangThuong:public KhachHang
{
public:
	void Nhap(string a);
	string getCMND();
	float getDiem();
	float setDiem(const float &);
	KhachHangThuong();
	~KhachHangThuong();
};

