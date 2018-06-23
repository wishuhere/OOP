#pragma once
#include "KhachHang.h"
class KhachHangThanThiet:public KhachHang
{
private:
	int capDoThanThiet;
public:
	void Nhap();
	string getCMND();
	float getDiem();
	int getCapDo();
	float setDiem(const float &);
	KhachHangThanThiet();
	~KhachHangThanThiet();
};

