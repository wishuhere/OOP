#include <iostream>
#include <string>
using namespace std;

#pragma once
class HocSinh
{
private:
	string Ten;
	float Diem1, Diem2, Diem3, DiemTB;
	int ms;
	static int MS;
	static float diemTrungBinhCaoNhat;
	static HocSinh hocSinhCoDiemTrungBinhCaoNhat;
public:
	friend ostream& operator<<(ostream &, HocSinh);
	static HocSinh HSDiemTBCaoNhat();
	void DatHoTen(string);
	void GanDiem(float, float, float);
	HocSinh(string, float, float, float);
	HocSinh();
	~HocSinh();
};

