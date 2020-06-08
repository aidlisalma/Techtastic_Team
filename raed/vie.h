#ifndef VIE_H_INCLUDED
#define VIE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

typedef struct 
{
	SDL_Surface *Barre[4]; //declaration d'un tableau des images de niveau de vie
	int vie;
    int score;
	bool survie; // bool survie si l'hero est encore en vie ou pas
}Vie;

void Init_Vie(Vie *v); // init la vie de hero
void Calcul_Vie(Vie *v); //gestion de vie si un ennemie est en collision avec l'hero
void Display_Vie(Vie *v,SDL_Surface*ecran,SDL_Rect position); // affichage de vie
void Free_vie(Vie *v); //liberation de la memoire au niveau de vie

#endif
