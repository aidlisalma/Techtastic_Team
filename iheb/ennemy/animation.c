#include "ennemy.h"

void Animation_Ennemy(Ennemy *e)
{
	e->Animation++;

	if(e->Animation==4)
	{
		e->Animation=1;
		if(e->Direction)
		{
			e->Direction=false;	
		}
		else
		{
			e->Direction=true;	
		}
	}
	if(e->Direction)
	{
		e->Position.x+=70;	
	}
	else

	{
		e->Position.x-=70;	
	}

}
