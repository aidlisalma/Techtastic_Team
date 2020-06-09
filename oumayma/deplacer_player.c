#include "player.h"
void DeplacementPlayer(Player *p,SDL_Rect position,int colli)
{ 
	if(position.x > p->Position.x )
	{      { p->Position.x+=p->speed;
                p->speed+=1;
               
	
	if(colli!=1)	p->Direction=true;}
		if(position.x < p->Position.x)
		{    
			p->Position.x=position.x;
		if(colli!=1)	p->Etat_Mv=false;
                 
		}		
	}
	else
	{  p->Position.x-=p->speed;
	        p->speed+=1;
		if(colli!=1)p->Direction=false;
		if(position.x > p->Position.x )
		{
			p->Position.x=position.x;
		if(colli!=1)	p->Etat_Mv=false;
		}		
	}
	p->Deplacement++;
	if(p->Deplacement==6)
	{
		p->Deplacement=0;
	}

}

void DeplacementPlayerC(Player *p)
{ 
	if(p->Direction)
	{   if(p->Position.x<=7300)     
 {p->Position.x+=p->speed;
 p->speed+=1;  }
        
	}
	else     if(p->Position.x>=10) 
	{        {p->Position.x-=p->speed;
                 p->speed+=1;}
	
	}		

	p->Deplacement++;
	if(p->Deplacement==6)
	{
		p->Deplacement=0;
	}

}

