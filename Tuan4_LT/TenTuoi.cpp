#include "TenTuoi.h"

void TenTuoi::Nhap()
{
	int i = 0;
	while (!cin.eof())
	{
		cin >> hoTen[i];
		cin >> namSinh[i];
		i++;
	}
	n = i * 2;
}

void TenTuoi::tinhTuoiLonNhat()
{
	int max = 0, temp = 0;
	string a = "";
	string b = "";
	a = namSinh[0];
	for (int j = 0; j < a.length(); j++)
	{
		if (a[j] != '/')
			b += a[j];
	}
	max = 2017 - (stoi(b) % 10000);
	for (int i = 0; i < n / 2; i++)
	{
		string a = "";
		string b;
		a = namSinh[i];
		for (int j = 0; j < a.length(); j++)
		{
			if (a[j] != '/')
				b += a[j];
		}
		int c = 2017 - (stoi(b) % 10000);
		if ( c > max)
		{
			temp = i;
			max = c;
		}
	}
	cout << hoTen[temp] << " " << max;
}


TenTuoi::TenTuoi()
{
}


TenTuoi::~TenTuoi()
{
}
