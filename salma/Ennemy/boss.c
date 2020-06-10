#include "ennemy.h"


void Animation_boss(Ennemy *e,SDL_Rect pos)
{ float verif,verif2;
verif=e->Position.x-pos.x;
if(verif<0)
verif2=verif*-1;
else verif2=verif;
if(verif2<=500)
e->attack=1;
else e->attack=0;
	e->Animation++;

	if( e->attack==0 )
	{       if(e->Animation>=2)
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
	
 if(e->attack==1)
	{       if(e->Animation==3)
		e->Animation=1;
		if(verif>0)
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
		e->Position.x+=10;	
               
	}
	else

	{
		e->Position.x-=10;	
	}
}
