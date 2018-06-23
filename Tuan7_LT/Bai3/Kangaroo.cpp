#include "Kangaroo.h"

void CKangaroo::Nhap()
{
	cin >> n;
	cin >> a;
	cin >> b;
}

void CKangaroo::Xuat()
{
	int m = n / b;
	int k = 0;
	if ((a + b) > n)
	{
		cout << -1;
		return;
	}
	while ((m*b + k*a) != n)
	{
		if (((n - m*b) % a) == 0)
			k = (n - m*b) / a;
		else
		{
			m--;
			k++;
		}
		if ((m*b + k*a) > n)
		{
			cout << -1;
			return;
		}
	}
	cout << m + k;
}

CKangaroo::CKangaroo()
{
}


CKangaroo::~CKangaroo()
{
}
