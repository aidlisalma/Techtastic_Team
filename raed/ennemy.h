#ifndef ENNEMY_H_INCLUDED
#define ENNEMY_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

typedef struct 
{
        /*-----chargement des sprites----*/
	SDL_Surface *Animation_G[4];
	SDL_Surface *Animation_D[4];
        SDL_Surface *Animation_AD[3];
        SDL_Surface *Animation_AG[3];
	int Animation;
        int attack;
        SDL_Rect Position;
	bool Direction;
}Ennemy;

void Initialisation_Ennemy(Ennemy *e,SDL_Rect pos);
void Initialisation_Boss(Ennemy *e,SDL_Rect pos);
void Display_Ennemy(Ennemy *e,SDL_Surface *ecran,SDL_Rect pos);
void Display_Boss(Ennemy *e,SDL_Surface *ecran,SDL_Rect pos);
void Animation_Ennemy(Ennemy *e);
void Free_Ennemy(Ennemy *e);
void Animation_boss(Ennemy *e,SDL_Rect pos);



#endif
