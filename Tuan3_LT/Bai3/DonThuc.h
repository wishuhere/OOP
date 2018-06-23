#include <iostream>
using namespace std;
#pragma once
class CDonThuc
{
private:
	float soMu;
	float heSo;
public:
	friend istream& operator>>(istream &is, CDonThuc &a);
	friend ostream& operator<<(ostream &os, CDonThuc a);
	bool operator>(CDonThuc);
	bool operator<(CDonThuc);
	bool operator==(CDonThuc);
	bool operator!=(CDonThuc);
	CDonThuc operator+(CDonThuc);
	CDonThuc operator-(CDonThuc);
	CDonThuc operator*(CDonThuc);
	CDonThuc operator/(CDonThuc);
	CDonThuc();
	~CDonThuc();
};

