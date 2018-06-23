#include <iostream>
using namespace std;
#pragma once
class Day2016
{
private:
	int day, month;
public:
	//Toan tu gan
	friend istream& operator>>(istream &is, Day2016 &);
	//Xuat thu ngay thang nam
	void xuatThuNgayThangNam(Day2016);
	//Nhap gia tri ngay trong nam 
	void xuatThuNgay(int);
	//Nhap vao ngay va so ngay sau do
	void xuatNhapvaoNgayVaSoNgaySauDo(Day2016, int);
	//Khoi tao
	Day2016();
	Day2016(int);
	Day2016(int, int);

	~Day2016();
};

