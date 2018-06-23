#include<iostream>
#include<string>
using namespace std;
#pragma once
class CAnimals
{
protected:
	string M_Code;
	int M_Speed;
	int M_Equipment;
public:
	void Nhap();
	void Xuat();
	friend ostream& operator<<(ostream&os, const CAnimals &a);
	virtual float Finish_Time() = 0;
	CAnimals();
	~CAnimals();
};

