#include <iostream>
using namespace std;

#pragma once
class CNgay
{
private:
	int Ngay, Thang, Nam;
public:
	friend istream& operator>>(istream& is, CNgay &p);
	friend ostream& operator<<(ostream& os, CNgay p);
	bool operator>(CNgay);
	bool operator<(CNgay);
	bool operator==(CNgay);
	bool operator!=(CNgay);
	bool laNamNhuan();
	CNgay operator-=(const int &);
	CNgay operator-(const int &);
	CNgay homQua();
	CNgay();
	~CNgay();
};

