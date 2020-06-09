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
