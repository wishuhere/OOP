#include "PhanSo.h"


PhanSo::PhanSo()
{
}

//PhanSo::PhanSo(int tu, int mau)
//{
//	tuSo = tu;
//	mauSo = mau;
//}

int PhanSo::UCLN(int tu, int mau)
{
	tu = abs(tuSo);
	mau = abs(mauSo);
	if (tu*mau == 0) return 1;
	while (tu != mau)
	{

		if (tu > mau) 
			tu -= mau;
		else mau -= tu;
	}
	return tu;
}

void PhanSo::rutGon()
{
	int u;
	u = UCLN(tuSo, mauSo);
	tuSo = tuSo / u;
	mauSo = mauSo / u;
}

PhanSo PhanSo::cong(PhanSo a)

{
	PhanSo p;
	p.tuSo = tuSo*a.mauSo + a.tuSo*mauSo;
	p.mauSo = mauSo*a.mauSo;
	return p;
}

PhanSo PhanSo::tru(PhanSo a)

{
	PhanSo p;
	p.tuSo = tuSo*a.mauSo - a.tuSo*mauSo;
	p.mauSo = mauSo*a.mauSo;
	return p;
}

PhanSo PhanSo::nhan(PhanSo a)

{
	PhanSo p;
	p.tuSo = tuSo*a.tuSo;
	p.mauSo = mauSo*a.mauSo;
	return p;
}

PhanSo PhanSo::chia(PhanSo a)

{
	PhanSo p;
	p.tuSo = tuSo*a.mauSo;
	p.mauSo = mauSo*a.tuSo;
	return p;
}

PhanSo PhanSo::congVoiSoNguyen(int a)

{
	PhanSo p;
	p.tuSo = tuSo + a*mauSo;
	p.mauSo = mauSo;
	return p;
}

PhanSo PhanSo::truVoiSoNguyen(int a)

{
	PhanSo p;
	p.tuSo = tuSo - a*mauSo;
	p.mauSo = mauSo;
	return p;
}

PhanSo PhanSo::nhanVoiSoNguyen(int a)

{
	PhanSo p;
	p.tuSo = tuSo*a;
	p.mauSo = mauSo;
	return p;
}

PhanSo PhanSo::chiaVoiSoNguyen(int a)

{
	PhanSo p;
	p.tuSo = tuSo;
	p.mauSo = mauSo*a;
	return p;
}

void PhanSo::Nhap()
{
	cout << "Nhap vao tu so: ";
	cin >> tuSo;
	do
	{
		cout << "Nhap vao mau so: ";
		cin >> mauSo;
	} while (mauSo == 0);
}

void PhanSo::Xuat()
{
	cout << tuSo << "/" << mauSo << endl;
}


PhanSo::~PhanSo()
{
}
