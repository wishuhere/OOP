#include <iostream>
using namespace std;
#pragma once
class CNgayThangNam
{
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	void Nhap();
	void Xuat();
	int kiemTra();
	int kiemTraNamNhuan();
	CNgayThangNam();
	~CNgayThangNam();
};

