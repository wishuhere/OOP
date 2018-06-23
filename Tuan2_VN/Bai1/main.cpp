#include "Diem.h"

void tinhChuViVaDienTich(Diem a, Diem b, Diem c)
{
	if (a.xetDongThang(b, c) == 1)
		cout << "3 diem dong thang";
	else
	{
		double AB, AC, BC;
		AB = a.khoangCach(b);
		BC = b.khoangCach(c);
		AC = a.khoangCach(c);
		double p = (AB + BC + AC) / 2;
		double dienTich = sqrt(p*(p - AB)*(p - BC)*(p - AC));
		cout << "Chu vi va dien tich cua tam giac tao boi 3 diem A, B, C: " << p * 2 << "  " << dienTich;
	}
}

int main()
{
	Diem a, b, c;
	cout << "Nhap vao diem A." << endl;
	a.Nhap();
	cout << "Nhap vao diem B." << endl;
	b.Nhap();
	cout << "Nhap vao diem C." << endl;
	c.Nhap();
	tinhChuViVaDienTich(a, b, c);
	return 0;
}