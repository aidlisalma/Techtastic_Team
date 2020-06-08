#include "ennemy.h"

void Initialisation_Ennemy(Ennemy *e,SDL_Rect pos)
{

	e->Position.x=pos.x;
	e->Position.y=pos.y;

	e->Direction=true;
	e->Animation=1;

	e->Animation_D[1]=IMG_Load("img/ennemy/ed1.png");
	e->Animation_D[2]=IMG_Load("img/ennemy/ed2.png");
	e->Animation_D[3]=IMG_Load("img/ennemy/ed3.png");

	e->Animation_G[1]=IMG_Load("img/ennemy/eg1.png");
	e->Animation_G[2]=IMG_Load("img/ennemy/eg2.png");
	e->Animation_G[3]=IMG_Load("img/ennemy/eg3.png");
}
void Initialisation_Boss(Ennemy *e,SDL_Rect pos)
{

	e->Position.x=pos.x;
	e->Position.y=pos.y;

	e->Direction=true;
	e->Animation=1;

	e->Animation_D[1]=IMG_Load("img/ennemy/d1.png");
	e->Animation_AD[1]=IMG_Load("img/ennemy/d2.png");
	e->Animation_AD[2]=IMG_Load("img/ennemy/d5.png");

	e->Animation_G[1]=IMG_Load("img/ennemy/g1.png");
	e->Animation_AG[1]=IMG_Load("img/ennemy/g2.png");
	e->Animation_AG[2]=IMG_Load("img/ennemy/g5.png");
}
void Display_Boss(Ennemy *e,SDL_Surface *ecran,SDL_Rect pos)
{       if(e->attack==0)
	{if(e->Direction)
	{
		SDL_BlitSurface(e->Animation_D[e->Animation], NULL, ecran, &pos);	
		//SDL_Flip(ecran);
	}
	else
	{
		SDL_BlitSurface(e->Animation_G[e->Animation], NULL, ecran, &pos);
		//SDL_Flip(ecran);
	}}
else {

if(e->Direction)
	{
		SDL_BlitSurface(e->Animation_AD[e->Animation], NULL, ecran, &pos);	
		//SDL_Flip(ecran);
	}
	else
	{
		SDL_BlitSurface(e->Animation_AG[e->Animation], NULL, ecran, &pos);
		//SDL_Flip(ecran);
	}



}
}
void Display_Ennemy(Ennemy *e,SDL_Surface *ecran,SDL_Rect pos)
{
	if(e->Direction)
	{
		SDL_BlitSurface(e->Animation_D[e->Animation], NULL, ecran, &pos);	
		//SDL_Flip(ecran);
	}
	else
	{
		SDL_BlitSurface(e->Animation_G[e->Animation], NULL, ecran, &pos);
		//SDL_Flip(ecran);
	}
}

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


void Free_Ennemy(Ennemy *e)
{
	for(int i=1;i<4;i++)
	{
		SDL_FreeSurface(e->Animation_D[i]);
		SDL_FreeSurface(e->Animation_G[i]);
	}
}

