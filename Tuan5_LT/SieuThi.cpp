#include "SieuThi.h"

void SieuThi::Nhap()
{
	string temp;
	cin >> temp;
	KhachHangThuong a;
	KhachHangThanThiet b;
	if (temp[0] == 'N')
	{
		a.Nhap(temp);
		dskh_thuong.push_back(a);
	}
	else
	{
		b.Nhap();
		dskh_thanthiet.push_back(b);
	}
}

void SieuThi::tinhTien(const string cmnd,const float tienMuaHang)
{
	float tienPhaiTra = tienMuaHang;
	for (int i = 0;; i++)
	{
		if (cmnd == dskh_thuong[i].getCMND())
		{
			if (dskh_thuong[i].getDiem() > 1000 && tienMuaHang > 5000000)
				tienPhaiTra = tienMuaHang - tienMuaHang * 0.02;
			break;
		}
		else
		{
			if (cmnd == dskh_thanthiet[i].getCMND())
			{
				if (dskh_thanthiet[i].getCapDo() == 1)
					tienPhaiTra = tienMuaHang - tienMuaHang*0.05;
				if (dskh_thanthiet[i].getCapDo() == 2)
					tienPhaiTra = tienMuaHang - tienMuaHang*0.07;
				if (dskh_thanthiet[i].getCapDo() == 3)
					tienPhaiTra = tienMuaHang - tienMuaHang*0.1;
				if (dskh_thanthiet[i].getDiem() > 1000 && tienMuaHang > 5000000)
					tienPhaiTra = tienPhaiTra - tienPhaiTra * 0.02;
				break;
			}
		}
		break;
	}
	cout << "So tien phai tra: ";
	printf("%f", tienPhaiTra);
}

void SieuThi::capNhapDiem(const string cmnd, const float soTienMuaHang)
{
	float diemTang;
	for (int i = 0;; i++)
	{
		if (cmnd == dskh_thuong[i].getCMND())
		{
			diemTang = soTienMuaHang / 50000;
			dskh_thuong[i].setDiem(diemTang);
			break;
		}
		else
		{
			if (cmnd == dskh_thanthiet[i].getCMND())
			{
				diemTang = soTienMuaHang / 40000;
				dskh_thanthiet[i].setDiem(diemTang);
				break;
			}
		}
		break;
	}
}

//void SieuThi::Xuat()
//{
//	for (int i = 0;; i++)
//	{
//		if (dskh_thuong[i].getDiem() > 1000)
//		{
//			dskh_thuong[i].Xuat();
//			break;
//		}
//		else
//		{
//			if (dskh_thanthiet[i].getDiem() > 1000)
//			{
//				dskh_thanthiet[i].Xuat();
//				break;
//			}
//		}
//	}
//}

SieuThi::SieuThi()
{
}


SieuThi::~SieuThi()
{
}
