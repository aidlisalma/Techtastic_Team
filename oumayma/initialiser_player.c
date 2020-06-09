#include "player.h"
void Initialisation_Player(Player *p,SDL_Rect pos)
{
	p->Position.x=pos.x;
	p->Position.y=pos.y;
	p->Position.w=pos.w;
	p->Position.h=pos.h;

	p->Etat_Mv=false;
	p->Etat_MvC=false;
	p->Ground=0;
	p->Jump=0;

	p->Direction=true;
	p->Deplacement=0;
	p->Animation=0;
	p->Attack=0;
	p->attack=0;
	char str[512];

	for(int i=0;i<6;i++)
	{
		sprintf(str, "img/player/ed%d.png", i+1);
		p->DeplacementG[i]=IMG_Load(str);
	}
	for(int j=0;j<6;j++)
	{
		sprintf(str, "img/player/eg%d.png", j+1);
		p->DeplacementD[j]=IMG_Load(str);
	}
	for(int k=0;k<7;k++)
	{
		sprintf(str, "img/player/AttackD%d.png", k+1);
		p->AttackD[k]=IMG_Load(str);
	}

	p->AnimationG[0]=IMG_Load("img/player/player_G1.png");
	p->AnimationG[1]=IMG_Load("img/player/player_G2.png");

	p->AnimationD[0]=IMG_Load("img/player/Animation1.png");
	p->AnimationD[1]=IMG_Load("img/player/Animation2.png");
        p->JumpD[0]=IMG_Load("img/player/player_jd.png");
        p->JumpG[0]=IMG_Load("img/player/player_jg.png");
}

