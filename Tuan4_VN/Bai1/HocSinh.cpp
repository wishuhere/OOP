#include "HocSinh.h"

float HocSinh::diemTrungBinhCaoNhat = -1;
HocSinh HocSinh::hocSinhCoDiemTrungBinhCaoNhat;
HocSinh HocSinh::HSDiemTBCaoNhat()
{
	return hocSinhCoDiemTrungBinhCaoNhat;
}

ostream& operator<<(ostream &os, HocSinh a)
{
	os << "HS: " << a.Ten << ", MS: " <<a.ms<<", DTB: "<< a.DiemTB; 
	return os;
}

void HocSinh::DatHoTen(string a)
{
	Ten = a;
	ms = MS++;
}

void HocSinh::GanDiem(float a, float b, float c)
{
	Diem1 = (a > 0) ? a : -a;
	Diem2 = (b > 0) ? b : -b;
	Diem3 = (c > 0) ? c : -c;
	DiemTB = (Diem1 + Diem2 + Diem3) / 3;
	ms = MS++;
}

HocSinh::HocSinh(string a,float b,float c,float d)
{
	Ten = a;
	Diem1 = (b > 0) ? b : -b;
	Diem2 = (c > 0) ? c : -c;
	Diem3 = (d > 0) ? d : -d;
	DiemTB = (Diem1 + Diem2 + Diem3) / 3;
	ms = MS++;
	if (this->DiemTB > diemTrungBinhCaoNhat)
	{
		diemTrungBinhCaoNhat = this->DiemTB;
		hocSinhCoDiemTrungBinhCaoNhat = *this;
	}
}

HocSinh::HocSinh()
{
	Ten = " ";
	Diem1 = Diem2 = Diem3 = 0;
	DiemTB = 0;
	ms++;
	if (this->DiemTB > diemTrungBinhCaoNhat)
	{
		diemTrungBinhCaoNhat = this->DiemTB;
		hocSinhCoDiemTrungBinhCaoNhat = *this;
	}
}

HocSinh::~HocSinh()
{
	MS--;
}
