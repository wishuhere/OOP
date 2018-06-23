#include "Bia.h"

void CBia::Nhap()
{
	cin >> banDau;
}

void CBia::Xuat()
{
	cout << tongCong;
}

void CBia::tinhBia()
{ 
	int soLanKhuyenMai = banDau / 10;
	int soDu = banDau - soLanKhuyenMai * 10;
	int lonBiaLucSau = soDu + soLanKhuyenMai * 3;
	while (lonBiaLucSau >= 10)
	{
		int n = lonBiaLucSau / 10;
		soDu = lonBiaLucSau - n * 10;
		lonBiaLucSau = soDu + n * 3;
		soLanKhuyenMai += n;
	}
	tongCong = banDau + 3 * soLanKhuyenMai;
}

CBia::CBia()
{
}


CBia::~CBia()
{
}
