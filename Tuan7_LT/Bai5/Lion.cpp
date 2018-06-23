#include "Lion.h"

float CLion::Finish_Time()
{
	if (M_Equipment == 1) 
		return (float)(9 + 210 / (2 * M_Speed));
	return (float)(9 + 210 / M_Speed);
}

CLion::CLion()
{
}


CLion::~CLion()
{
}
