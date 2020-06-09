#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED


#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include"ennemy.h"
#include"vie.h"
#include "player.h"
#include "bounding.h"

#include "scrol.h"


#include "collisionparfaite.h"







typedef struct game
{
	Ennemy e,e2,boss;
	Vie v;
	Player p,p2;
	
	Scroll cam,cam2;
	
	int sc;
	int time;

	SDL_Rect pos_real,pos_real2,pos_real3;
	SDL_Surface *background,*background2,*fondnoir;
	SDL_Surface *backmask;
        SDL_Surface *minimap;
        SDL_Surface *index;
	SDL_Rect pos_souris;
        SDL_Rect posindex;
        bool GameOver;
        bool quitter;

	bool collision,collision2,collision3;
	int colParfaite;
	int kill,kill2,kill3;
        int test_jump;
        int jump_stop;
        int menu;
        int souris;
        int clavier;
        
}Game;

void init_jeu(Game* G);
void nouv_jeu(Game* G,SDL_Surface *ecran);
void chargement(Game *G,SDL_Surface *ecran);
void freejeu(Game* G);
void afficherjeu(Game* G,SDL_Surface *ecran);
void jouer_jeu(Game* G,SDL_Surface *ecran);
void miseajour(Game* G);
void sauvegarder(Game *G);
void charger_jeu(Game *G);
void minimap(Game *G,SDL_Surface *ecran,SDL_Rect pos);
void jump(Game *G);
#endif
