#include "Lion.h"
#include "Rabbit.h"
#include "Turtle.h"
#pragma once
class CRace
{
private:
	int amount;
	CAnimals *Animals_List[10000];
public:
	void Nhap();
	void Xuat();
	CRace();
	~CRace();
};
