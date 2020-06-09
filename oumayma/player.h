#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>


typedef struct 
{
	SDL_Surface *DeplacementG[6];
	SDL_Surface *DeplacementD[6];
	SDL_Surface *AnimationG[5];
	SDL_Surface *AnimationD[5];
	SDL_Surface *AttackG[7];
	SDL_Surface *AttackD[7];
        SDL_Surface *JumpD[1];
        SDL_Surface *JumpG[1];
	int Animation;
    SDL_Rect Position;
        
    
	bool Direction;
	bool Etat_Mv;
	bool Etat_MvC;
	int Deplacement;
	int Ground;
	int Jump;
	int Attack;
	int attack;
        int speed;
}Player;

void Initialisation_Player(Player *p,SDL_Rect pos);

void Display_Player(Player *p,SDL_Surface *ecran,SDL_Rect position);

void Attack_Player(Player *p,SDL_Surface *ecran,SDL_Rect position);

void Jump_Player(Player *p,SDL_Surface *ecran,SDL_Rect position);

void DeplacementPlayer(Player *p,SDL_Rect position,int colli);

void DeplacementPlayerC(Player *p);

void Animation_Player(Player *p,SDL_Surface *ecran,SDL_Rect position);

void Free_Player(Player *p);




#endif
