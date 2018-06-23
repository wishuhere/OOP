#include "Animals.h"

void CAnimals::Nhap()
{
	cin >> M_Code;
	cin >> M_Speed;
	cin >> M_Equipment;
}

void CAnimals::Xuat()
{
	cout << M_Code << " " << M_Speed << " " << M_Equipment;
}

ostream& operator<<(ostream &os, const CAnimals &a)
{
	os << a.M_Code << " " << a.M_Speed << " " << a.M_Equipment;
	return os;
}

CAnimals::CAnimals()
{
}


CAnimals::~CAnimals()
{
}
