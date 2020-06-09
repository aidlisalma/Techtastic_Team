#include "playerh."
void Animation_Player(Player *p,SDL_Surface *ecran,SDL_Rect position)
{
	if(p->Direction)
	{
		SDL_BlitSurface(p->AnimationD[p->Animation], NULL, ecran, &position);


	}
	else
	{
		SDL_BlitSurface(p->AnimationG[p->Animation], NULL, ecran, &position);

	}

}
