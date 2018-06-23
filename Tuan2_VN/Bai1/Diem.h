#include <iostream>
#include <math.h>
using namespace std;
#pragma once
class Diem
{
private:
	float x, y;
public:
	Diem();
	void Nhap();
	Diem(float xx, float yy);
	void tinhChuViVaDienTich(Diem a, Diem b, Diem c);
	int xetDongThang(Diem b, Diem c);
	double khoangCach(const Diem &);
	~Diem();
};

