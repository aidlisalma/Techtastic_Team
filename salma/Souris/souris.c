#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include "SDL/SDL_image.h"
#include "Hero.h"
#include <time.h>
#include "souris.h"

void mouse(Hero *H,SDL_Rect *positionFond ,SDL_Rect *positionmilieu,SDL_Surface *ecran)
{
    int mouseX=100;
    int mouseY=550;
    SDL_Event event;
	SDL_GetMouseState(&mouseX,&mouseY);
    printf("position_clic_x=%d\tposition_clic_y=%d\n",mouseX,mouseY);
    printf("position_hero_x=%d\tposition_hero_y=%d\n\n",H->positionHero.x,H->positionHero.y);

    if (H->positionHero.x < mouseX)
    {
        H->direction      =1 ;
        positionmilieu->x +=10;
        if  (positionFond->x<=6255 )
        {
            positionFond->x   += 50;
        }
    }
    else
    {
        H->direction      =2 ;
    }

	H->positionHero.x = (int) lerp(H->positionHero.x,mouseX,0.2);//changement de position du personnage
	
	SDL_Delay(16);// ecart de temps , 9adeh to93ed wa9et bech temchi men position li position
}