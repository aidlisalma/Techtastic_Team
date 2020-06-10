#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include "quiz.h"
#include <math.h>
#include <time.h>
void QUIZ_Init (quiz *q) // initialisation du Quiz
{
	q->p.x=0;
	q->p.y=0;
	q->img=NULL;


}

 void afficherAlea (SDL_Surface * screen  , char image [],quiz *q,int *alea) // Affichage du nombre aléatoire
{

 *alea =  rand()%1 +1;
 sprintf(image ,"%d.jpg",*alea);
q->img = IMG_Load(image);
 SDL_BlitSurface(q->img,NULL,screen,&(q->p)) ;
  SDL_Flip(screen) ;
}

 void solutionQuiz1 (SDL_Surface * screen ,char image [],int *x1,int *x2)
 {   SDL_Surface *img,*img1,*img2;
  char im1[30];
  char   im2[30];
SDL_Rect p,p1,p2;
    float delta ;
          int a,b,c,d,i,j;


 	if(strcmp(image,"1.jpg")==0)
 	{
   do
{
       a=1;
       d=rand()%10;
       b=-d;
       c=rand()%10;
p.x=269;
p.y=258;
p1.x=449;
p1.y=258;
p2.x=656;
p2.y=258;
img=IMG_Load("n1.png");
SDL_BlitSurface(img,NULL,screen,&p);
SDL_Flip(screen);

printf(" %d    %d    %d  %d\n",a,b,c,d);
       delta= pow(b,2) -4*a*c;



      *x1= (int) (-b- sqrt(delta))/(2*a) ; // génération du premier solution de l'équation
      *x2= (int)(-b+(sqrt(delta)))/(2*a);  // génération du deuxiéme solution de l'équation
}
while ((delta<0)&&((*x1<0)||(*x2<0)));  // Bliter le reste des nombres de l'équation sur l'écran (d et c)
if(d==1)
{
img1=IMG_Load("n1.png");
SDL_BlitSurface(img1,NULL,screen,&p1);
SDL_Flip(screen);
}
else if(d==2)
{
img1=IMG_Load("n2.png");
SDL_BlitSurface(img1,NULL,screen,&p1);
SDL_Flip(screen);
}
else if(d==3)
{
img1=IMG_Load("n3.png");
SDL_BlitSurface(img1,NULL,screen,&p1);
SDL_Flip(screen);
}
else if(d==4)
{
img1=IMG_Load("n4.png");
SDL_BlitSurface(img1,NULL,screen,&p1);
SDL_Flip(screen);
}
else if(d==5)
{
img1=IMG_Load("n5.png");
SDL_BlitSurface(img1,NULL,screen,&p1);
SDL_Flip(screen);
}
else if(d==6)
{
img1=IMG_Load("n6.png");
SDL_BlitSurface(img1,NULL,screen,&p1);
SDL_Flip(screen);
}
else if(d==7)
{
img1=IMG_Load("n7.png");
SDL_BlitSurface(img1,NULL,screen,&p1);
SDL_Flip(screen);
}
else if(d==8)
{
img1=IMG_Load("n8.png");
SDL_BlitSurface(img1,NULL,screen,&p1);
SDL_Flip(screen);
}
else if(d==9)
{
img1=IMG_Load("n9.png");
SDL_BlitSurface(img1,NULL,screen,&p1);
SDL_Flip(screen);
}
else if(d==0)
{
img1=IMG_Load("n0.png");
SDL_BlitSurface(img1,NULL,screen,&p1);
SDL_Flip(screen);
}
if(c==1)
{
img2=IMG_Load("n1.png");
SDL_BlitSurface(img2,NULL,screen,&p2);
SDL_Flip(screen);
}
else if(c==2)
{
img2=IMG_Load("n2.png");
SDL_BlitSurface(img2,NULL,screen,&p2);
SDL_Flip(screen);
}
else if(c==3)
{
img2=IMG_Load("n3.png");
SDL_BlitSurface(img2,NULL,screen,&p2);
SDL_Flip(screen);
}
else if(c==4)
{
img2=IMG_Load("n4.png");
SDL_BlitSurface(img2,NULL,screen,&p2);
SDL_Flip(screen);
}
else if(c==5)
{
img2=IMG_Load("n5.png");
SDL_BlitSurface(img2,NULL,screen,&p2);
SDL_Flip(screen);
}
else if(c==6)
{
img2=IMG_Load("n6.png");
SDL_BlitSurface(img2,NULL,screen,&p2);
SDL_Flip(screen);
}
else if(c==7)
{
img2=IMG_Load("n7.png");
SDL_BlitSurface(img2,NULL,screen,&p2);
SDL_Flip(screen);
}
else if(c==8)
{
img2=IMG_Load("n8.png");
SDL_BlitSurface(img2,NULL,screen,&p2);
SDL_Flip(screen);
}
else if(c==9)
{
img2=IMG_Load("n9.png");
SDL_BlitSurface(img2,NULL,screen,&p2);
SDL_Flip(screen);
}
else if(c==0)
{
img2=IMG_Load("n0.png");
SDL_BlitSurface(img2,NULL,screen,&p2);
SDL_Flip(screen);
}


  }

 }


int resolutionQuiz1 (int * running,int *run ) // Résolution de quiz
{
	SDL_Event event ;
 int r=-1;
               SDL_WaitEvent(&event);
							    if( event.type == SDL_QUIT)
                 {
                * running= 0 ;
                *run = 0;
								 }
							    if( event.type == SDL_KEYDOWN )
                 {

            if( ( event.key.keysym.unicode >= ((Uint16)48) ) && ( event.key.keysym.unicode <= ((Uint16)57)	 ) )
            {
							r=event.key.keysym.unicode-48  ;

						}
								 }
return r;


	}


 void afficherResultat (SDL_Surface * screen,int r2,int r1,quiz *qz,int x1,int x2) // Affichage du résultat
 {
  FILE *f ;
f=fopen("QuizFile","a") ;
 	if (((r1==x1)&&(r2==x2))||((r2==x1)&&(r1==x2)))
 	{
 		qz->img=IMG_Load("yes.png");
 fprintf(f,"/********correct answer*******/  \n x1= %d  x2= %d\n",r1,r2) ;
 		SDL_BlitSurface(qz->img, NULL, screen, &(qz->p)) ;
        SDL_Flip(screen);
 	}
 	else
 	{
fprintf(f,"wrong essai : \n x1= %d  x2= %d\n",r1,r2) ;
 		qz->img=IMG_Load("no.png");
 		SDL_BlitSurface(qz->img, NULL, screen, &(qz->p)) ;
        SDL_Flip(screen);
 	}


	 fclose(f) ; // Fin du Quiz
 }
