#include <iostream>
#include <string>
using namespace std;
#pragma once
class TenTuoi
{
private:
	string hoTen[100];
	string namSinh[100];
	int n;
public:
	void Nhap();
	void tinhTuoiLonNhat();
	TenTuoi();
	~TenTuoi();
};

