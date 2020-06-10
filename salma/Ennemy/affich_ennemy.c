#include "ennemy.h"


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

