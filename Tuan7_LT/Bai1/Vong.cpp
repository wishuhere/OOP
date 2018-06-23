#include "Vong.h"

void CVong::Nhap()
{
	cin >> soNgay;
}

void CVong::Xuat()
{
	cout << leftHand << "  " << rightHand;
}

void CVong::tinhNgay()
{
	for (int i = 0; i < soNgay;)
	{
		while (leftHand != 0)
		{
			leftHand--;
			rightHand++;
			i++;
			if (i == soNgay) break;
		}
		if (i == soNgay) break;
		while (rightHand != 0)
		{
			leftHand++;
			rightHand--;
			i++;
			if (i == soNgay) break;
		}
		if (i == soNgay) break;
	}
}

CVong::CVong()
{
}


CVong::~CVong()
{
}
