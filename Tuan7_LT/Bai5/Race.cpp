#include "Race.h"

void CRace::Nhap()
{
	cin >> amount;
	for (int i = 0; i < amount; i++)
	{
		CAnimals *temp = NULL;
		char m_Code;
		cin >> m_Code;
		if (m_Code == 'L') temp = new CLion;
		if (m_Code == 'R') temp = new CRabbit;
		if (m_Code == 'T') temp = new CTurtle;
		fseek(stdin, -1, SEEK_CUR);
		temp->Nhap();
		Animals_List[i] = temp;
	}
}

void CRace::Xuat()
{
	int k = 0;
	int j = 0;
	for (int i = 0; i < amount; i++)
	{
		if (Animals_List[i]->Finish_Time() < 12) k++;
	}
	cout << k << endl;
	for (int i = 0; i < amount; i++)
	{
		for (int j = i + 1; j < amount - 1; j++)
		{
			if (Animals_List[i]->Finish_Time() < 12 && Animals_List[j]->Finish_Time() < 12 && Animals_List[i]->Finish_Time() >= Animals_List[j]->Finish_Time())
			{
				swap(Animals_List[i], Animals_List[j]);
			}
		}
	}
	for (int i = 0; i < amount; i++)
	{
		if (Animals_List[i]->Finish_Time() < 12)
		{
			j++;
			cout << j << ". ";
			Animals_List[i]->Xuat();
			cout << endl;
		}
	}
}

CRace::CRace()
{
}


CRace::~CRace()
{
}
