#include <iostream>
using namespace std;
#pragma once
class CThoiGian
{
private:
	int Gio, Phut, Giay;
public:
	friend istream& operator>>(istream& is, CThoiGian &p);
	friend ostream& operator<<(ostream& os, CThoiGian p);
	CThoiGian();
	~CThoiGian();
};

