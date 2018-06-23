#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "KhachHangThuong.h"
#include "KhachHangThanThiet.h"
using namespace std;
class SieuThi
{
private:
	vector<KhachHangThanThiet> dskh_thanthiet;
	vector<KhachHangThuong> dskh_thuong;
public:
	void Nhap();
	void tinhTien(const string, const float);
	void capNhapDiem(const string, const float);
	void Xuat();
	SieuThi();
	~SieuThi();
};

