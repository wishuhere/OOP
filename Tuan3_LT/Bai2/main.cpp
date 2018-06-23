#include "Ngay.h"

int main()
{
	CNgay a;
	int n;
	cout << "Nhap du lieu.\n";
	cin >> a;
	cout << a<< endl;
	cout << "Nhap vao ngay can tru: ";
	cin >> n;
	cout << (a -= n);
	return 0;
}