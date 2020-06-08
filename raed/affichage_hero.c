void Display_Player(Player *p,SDL_Surface *ecran,SDL_Rect position)
{
	fprintf(stderr," %d \n",p->Attack);
	if(p->Attack==0)
	{
		if(p->Direction)
		{
			SDL_BlitSurface(p->DeplacementD[p->Deplacement], NULL, ecran, &position);
			//SDL_Flip(ecran);
			SDL_Delay(5);
		}
		else
		{
			SDL_BlitSurface(p->DeplacementG[p->Deplacement], NULL, ecran, &position);
			//SDL_Flip(ecran);
			SDL_Delay(5);
		}
	}
	else
	{

		
	}
	
	p->Etat_MvC=false;
	p->Animation++;
	if(p->Animation==2)
	{
		p->Animation=0;
	}
}