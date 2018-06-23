#include <iostream>
#include <math.h>
using namespace std;
#pragma once
class PhanSo
{
private:   
	int tuSo, mauSo;
public:   
	PhanSo();  
	//PhanSo(int tu, int mau);  
	//PhanSo(const PhanSo &);   
	int UCLN(int tu, int mau);
	void rutGon();
	void Nhap();
	void Xuat();
	PhanSo cong(PhanSo p);   
	PhanSo tru(PhanSo p); 
	PhanSo nhan(PhanSo p);   
	PhanSo chia(PhanSo p);
	PhanSo congVoiSoNguyen(int p);
	PhanSo truVoiSoNguyen(int p);
	PhanSo nhanVoiSoNguyen(int p);
	PhanSo chiaVoiSoNguyen(int p);
	~PhanSo();
};