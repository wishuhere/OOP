#include "Rabbit.h"

float CRabbit::Finish_Time()
{
	if (M_Equipment == 1) 
		return (float)(8 + 210 / (M_Speed + 30));
	return (float)(8 + 210 / M_Speed);
}

CRabbit::CRabbit()
{
}


CRabbit::~CRabbit()
{
}
