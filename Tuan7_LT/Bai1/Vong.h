#pragma once
#include <iostream>
using namespace std;
class CVong
{
private:
	int soNgay;
	int leftHand = 7, rightHand  = 0;
public:
	void Nhap();
	void Xuat();
	void tinhNgay();
	CVong();
	~CVong();
};

