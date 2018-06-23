#include "Turtle.h"

float CTurtle::Finish_Time()
{
	if (M_Equipment == 1) 
		return (float)(7 + 75 / (5 * M_Speed));
	return (float)(7 + 75 / M_Speed);
}

CTurtle::CTurtle()
{
}


CTurtle::~CTurtle()
{
}
