#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>

//#include <FMOD/fmod.h>

Uint32 bougerobjet(Uint32 intervalle, void *parametre);
Uint32 bougerobjet1(Uint32 intervalle, void *parametre);
Uint32 bougerobjet2(Uint32 intervalle, void *parametre);
Uint32 bougerobjet3(Uint32 intervalle, void *parametre);
Uint32 bougerobjet4(Uint32 intervalle, void *parametre);
Uint32 bougerobjet5(Uint32 intervalle, void *parametre);
Uint32 bougerobjet6(Uint32 intervalle, void *parametre);
Uint32 bougerobjet7(Uint32 intervalle, void *parametre);
Uint32 bougerobjet8(Uint32 intervalle, void *parametre);
Uint32 bougerobjet9(Uint32 intervalle, void *parametre);
Uint32 bougerobjet10(Uint32 intervalle, void *parametre);

int main(int argc, char *argv[])
{
SDL_Surface *ecran = NULL, *objet = NULL, *hero = NULL, *terrain = NULL, *objet1 = NULL, *objet2 = NULL, *objet3 = NULL, *objet4 = NULL, *objet5 = NULL, *objet6 = NULL, *objet7 = NULL, *objet8 = NULL, *objet9 = NULL, *objet10 = NULL, *temps = NULL, *coeur = NULL, *coeur1 = NULL, *coeur2 = NULL;
SDL_Rect positionhero, positionobjet, positionterrain, positionobjet1, positionobjet2, positionobjet3, positionobjet4, positionobjet5, positionobjet6, positionobjet7, positionobjet8, positionobjet9, positionobjet10, positiontemps, positioncoeur, positioncoeur1, positioncoeur2;

SDL_Surface *game_over = NULL;
SDL_Rect positiongame_over;

SDL_Event event;

int continuer = 1;
int ncoups = 0;
int tempsPrecedent = 0, tempsActuel = 0;
//FSOUND_SAMPLE *explosion = NULL;
    
    //FSOUND_Init(44100, 32, 0);

    //explosion = //FSOUND_Sample_Load(//FSOUND_FREE, "explosion.wav", 0, 0, 0);


SDL_TimerID timer; 
SDL_TimerID timer1; 
SDL_TimerID timer2; 
SDL_TimerID timer3; 
SDL_TimerID timer4; 
SDL_TimerID timer5; 
SDL_TimerID timer6; 
SDL_TimerID timer7; 
SDL_TimerID timer8; 
SDL_TimerID timer9; 
SDL_TimerID timer10; 

int test=1;

positiongame_over.x = 0;
positiongame_over.y = 0;

positionterrain.x = 0;
positionterrain.y = 0;

positionobjet.x = 500;
positionobjet.y = 250;

positionhero.x = 300;
positionhero.y = 400;

positiontemps.x = 5;
positiontemps.y = 400; 

SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);

 SDL_WM_SetIcon(SDL_LoadBMP("hero.bmp"), NULL);
   
 

    ecran = SDL_SetVideoMode(600, 500, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    SDL_WM_SetCaption("mini jeu raed >>>", NULL);

    terrain = SDL_LoadBMP("terrain.bmp");
    game_over =SDL_LoadBMP("game_over.bmp");
    
    objet = SDL_LoadBMP("objet.bmp");
    SDL_SetColorKey(objet, SDL_SRCCOLORKEY, SDL_MapRGB(objet->format, 255, 255, 255));
    
    
    temps = SDL_LoadBMP("temps.bmp");
    SDL_SetColorKey(temps, SDL_SRCCOLORKEY, SDL_MapRGB(temps->format, 255, 255, 255));
    
  
    
    
    objet1 = SDL_LoadBMP("objet.bmp");
    objet2 = SDL_LoadBMP("objet.bmp");
    objet3 = SDL_LoadBMP("objet.bmp");
    objet4 = SDL_LoadBMP("objet.bmp");
    objet5 = SDL_LoadBMP("objet.bmp");
    objet6 = SDL_LoadBMP("objet.bmp");
    objet7 = SDL_LoadBMP("objet.bmp");
    objet8 = SDL_LoadBMP("objet.bmp");
    objet9 = SDL_LoadBMP("objet.bmp");
    objet10 = SDL_LoadBMP("objet.bmp");
    
  
     SDL_SetColorKey(objet1, SDL_SRCCOLORKEY, SDL_MapRGB(objet1->format, 255, 255, 255));
     SDL_SetColorKey(objet2, SDL_SRCCOLORKEY, SDL_MapRGB(objet2->format, 255, 255, 255));
     SDL_SetColorKey(objet3, SDL_SRCCOLORKEY, SDL_MapRGB(objet3->format, 255, 255, 255));
     SDL_SetColorKey(objet4, SDL_SRCCOLORKEY, SDL_MapRGB(objet4->format, 255, 255, 255));
     SDL_SetColorKey(objet5, SDL_SRCCOLORKEY, SDL_MapRGB(objet5->format, 255, 255, 255));
     SDL_SetColorKey(objet6, SDL_SRCCOLORKEY, SDL_MapRGB(objet6->format, 255, 255, 255));
     SDL_SetColorKey(objet7, SDL_SRCCOLORKEY, SDL_MapRGB(objet7->format, 255, 255, 255));
     SDL_SetColorKey(objet8, SDL_SRCCOLORKEY, SDL_MapRGB(objet8->format, 255, 255, 255));
     SDL_SetColorKey(objet9, SDL_SRCCOLORKEY, SDL_MapRGB(objet9->format, 255, 255, 255));
     SDL_SetColorKey(objet10, SDL_SRCCOLORKEY, SDL_MapRGB(objet10->format, 255, 255, 255));
    
    positionobjet.x = 100;
    positionobjet.y = 50;
    
    positionobjet1.x = 150;
    positionobjet1.y = 200;
    
    positionobjet2.x = 350;
    positionobjet2.y = 300;
    
    positionobjet3.x = 370;
    positionobjet3.y = 220;
    
    positionobjet4.x = 230;
    positionobjet4.y = 100;
    
    positionobjet5.x = 120;
    positionobjet5.y = 190;
    
    positionobjet6.x = 300;
    positionobjet6.y = 250;
    
    positionobjet7.x = 200;
    positionobjet7.y = 140;
    
    positionobjet8.x = 350;
    positionobjet8.y = 170;
    
    positionobjet9.x = 270;
    positionobjet9.y = 205;
    
    positionobjet10.x = 130;
    positionobjet10.y = 142;
    
   
    
    hero = SDL_LoadBMP("hero.bmp");
    SDL_SetColorKey(hero, SDL_SRCCOLORKEY, SDL_MapRGB(hero->format, 0, 0, 0));
     timer   = SDL_AddTimer(1, bougerobjet,  &positionobjet);
     timer1  = SDL_AddTimer(1, bougerobjet1, &positionobjet1);
     timer2  = SDL_AddTimer(1, bougerobjet2, &positionobjet2);
     timer3  = SDL_AddTimer(1, bougerobjet3, &positionobjet3);
     timer4  = SDL_AddTimer(1, bougerobjet4, &positionobjet4);
     timer5  = SDL_AddTimer(1, bougerobjet5, &positionobjet5);
     timer6  = SDL_AddTimer(1, bougerobjet6, &positionobjet6);
     timer7  = SDL_AddTimer(1, bougerobjet7, &positionobjet7);
     timer8  = SDL_AddTimer(1, bougerobjet8, &positionobjet8);
     timer9  = SDL_AddTimer(1, bougerobjet9, &positionobjet9);
     timer10 = SDL_AddTimer(1, bougerobjet10,&positionobjet10);
     
     SDL_EnableKeyRepeat(1, 1);
     while (continuer)
    {
    
        SDL_PollEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
               case SDL_KEYDOWN:
                switch(event.key.keysym.sym)
                {
                    case SDLK_ESCAPE: 
                       continuer = 0;
                    break;

                    case SDLK_UP: 
                        positionhero.y--;
                        break;
                    case SDLK_DOWN: 
                        positionhero.y++;
                        break;
                    case SDLK_RIGHT: 
                        positionhero.x++;
                        break;
                    case SDLK_LEFT: 
                        positionhero.x--;
                        break;
                }       
            break;
         
        }
        
        if(positionobjet.x >= positionhero.x && positionobjet.x < positionhero.x+40&& positionobjet.y  >= positionhero.y && positionobjet.y  < positionhero.y+72)
        {
           ncoups++;
           //FSOUND_PlaySound(//FSOUND_FREE, explosion);
           SDL_BlitSurface(game_over, NULL, ecran, &positionterrain);
           //continuer = 0;
           test=0;
        }        
          if(positionobjet1.x >= positionhero.x && positionobjet1.x < positionhero.x+40&& positionobjet1.y  >= positionhero.y && positionobjet1.y  < positionhero.y+72)
        {
           ncoups++;
           //FSOUND_PlaySound(//FSOUND_FREE, explosion);
           SDL_BlitSurface(game_over, NULL, ecran, &positionterrain);
           //continuer = 0;
           test=0;
        }     
          if(positionobjet2.x >= positionhero.x && positionobjet2.x < positionhero.x+40&& positionobjet2.y  >= positionhero.y && positionobjet2.y  < positionhero.y+72)
        {
           ncoups++;
           //FSOUND_PlaySound(//FSOUND_FREE, explosion);
           SDL_BlitSurface(game_over, NULL, ecran, &positionterrain);
           //continuer = 0;
           test=0;
        }     
           if(positionobjet3.x >= positionhero.x && positionobjet3.x < positionhero.x+40&& positionobjet3.y  >= positionhero.y && positionobjet3.y  < positionhero.y+72)
        {
           ncoups++;
           //FSOUND_PlaySound(//FSOUND_FREE, explosion);
           SDL_BlitSurface(game_over, NULL, ecran, &positionterrain);
           //continuer = 0;
           test=0;
        }     
            if(positionobjet4.x >= positionhero.x && positionobjet4.x < positionhero.x+40&& positionobjet4.y  >= positionhero.y && positionobjet4.y  < positionhero.y+72)
        {
           ncoups++;
           //FSOUND_PlaySound(//FSOUND_FREE, explosion);
           SDL_BlitSurface(game_over, NULL, ecran, &positionterrain);
           //continuer = 0;
           test=0;
        }   
           if(positionobjet5.x >= positionhero.x && positionobjet5.x < positionhero.x+40&& positionobjet5.y  >= positionhero.y && positionobjet5.y  < positionhero.y+72)
        {
           ncoups++;
           //FSOUND_PlaySound(//FSOUND_FREE, explosion);
           SDL_BlitSurface(game_over, NULL, ecran, &positionterrain);
           //continuer = 0;
           test=0;
        }     
            if(positionobjet6.x >= positionhero.x && positionobjet6.x < positionhero.x+40&& positionobjet6.y  >= positionhero.y && positionobjet6.y  < positionhero.y+72)
        {
           ncoups++;
           //FSOUND_PlaySound(//FSOUND_FREE, explosion);
           SDL_BlitSurface(game_over, NULL, ecran, &positionterrain);
           //continuer = 0;
           test=0;
        }    
           if(positionobjet7.x >= positionhero.x && positionobjet7.x < positionhero.x+40&& positionobjet7.y  >= positionhero.y && positionobjet7.y  < positionhero.y+72)
        {
           ncoups++;
           //FSOUND_PlaySound(//FSOUND_FREE, explosion);
           SDL_BlitSurface(game_over, NULL, ecran, &positionterrain);
           //continuer = 0;
           test=0;
        }    
             if(positionobjet8.x >= positionhero.x && positionobjet8.x < positionhero.x+40&& positionobjet8.y  >= positionhero.y && positionobjet8.y  < positionhero.y+72)
        {
           ncoups++;
           //FSOUND_PlaySound(//FSOUND_FREE, explosion);
           SDL_BlitSurface(game_over, NULL, ecran, &positionterrain);
           //continuer = 0;
           test=0;
        }  
              if(positionobjet9.x >= positionhero.x && positionobjet9.x < positionhero.x+40&& positionobjet9.y  >= positionhero.y && positionobjet9.y  < positionhero.y+72)
        {
           ncoups++;
           //FSOUND_PlaySound(//FSOUND_FREE, explosion);
           SDL_BlitSurface(game_over, NULL, ecran, &positionterrain);
           //continuer = 0;
           test=0;
        } 
            if(positionobjet10.x >= positionhero.x && positionobjet10.x < positionhero.x+40&& positionobjet10.y  >= positionhero.y && positionobjet10.y  < positionhero.y+72)
        {
           ncoups++;
           //FSOUND_PlaySound(//FSOUND_FREE, explosion);
           SDL_BlitSurface(game_over, NULL, ecran, &positionterrain);
           //continuer = 0;
           test=0;
        }  
        
        
        if(ncoups < 3)
       {
       
        tempsActuel = SDL_GetTicks();
        if (tempsActuel - tempsPrecedent > 80) 
        {
            positiontemps.y--; 
            tempsPrecedent = tempsActuel; 
        }
       }
         else if(ncoups >3)
         {
               //FSOUND_PlaySound(//FSOUND_FREE, explosion);
               SDL_RemoveTimer(timer); 
               SDL_RemoveTimer(timer1); 
               SDL_RemoveTimer(timer2); 
               SDL_RemoveTimer(timer3); 
               SDL_RemoveTimer(timer4); 
               SDL_RemoveTimer(timer5); 
               SDL_RemoveTimer(timer6); 
               SDL_RemoveTimer(timer7); 
               SDL_RemoveTimer(timer8); 
               SDL_RemoveTimer(timer9); 
               SDL_RemoveTimer(timer10); 
               
                
         }      
          
                  
           
              
               SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
               switch (test)
               {
               case 0:
                   SDL_BlitSurface(game_over, NULL, ecran, &positionterrain);
                   SDL_Delay(100);
                   break;
               
               default:
                SDL_BlitSurface(terrain, NULL, ecran, &positionterrain);
                   break;
               }
               
               SDL_BlitSurface(hero, NULL, ecran, &positionhero);
               SDL_BlitSurface(objet, NULL, ecran, &positionobjet);
               SDL_BlitSurface(objet1, NULL, ecran, &positionobjet1);
               SDL_BlitSurface(objet2, NULL, ecran, &positionobjet2);
               SDL_BlitSurface(objet3, NULL, ecran, &positionobjet3);
               SDL_BlitSurface(objet4, NULL, ecran, &positionobjet4);
               SDL_BlitSurface(objet5, NULL, ecran, &positionobjet5);
               SDL_BlitSurface(objet6, NULL, ecran, &positionobjet6);
               SDL_BlitSurface(objet7, NULL, ecran, &positionobjet7);
               SDL_BlitSurface(objet8, NULL, ecran, &positionobjet8);
               SDL_BlitSurface(objet9, NULL, ecran, &positionobjet9);
               SDL_BlitSurface(objet10, NULL, ecran, &positionobjet10);
               SDL_BlitSurface(temps, NULL, ecran, &positiontemps);
               
                  SDL_Flip(ecran);
    
    }
    
    SDL_FreeSurface(terrain);
  
    SDL_FreeSurface(coeur);
    SDL_FreeSurface(hero);
    SDL_FreeSurface(objet);
    SDL_FreeSurface(temps);
           SDL_Quit();
                   
    SDL_RemoveTimer(timer); 
    
   

   //FSOUND_Sample_Free(explosion);
   //FSOUND_Close();

    return EXIT_SUCCESS;
}

Uint32 bougerobjet(Uint32 intervalle, void *parametre)

{
    SDL_Rect* positionobjet = parametre; 
    positionobjet->y++;
     if(positionobjet->y > 420)
        {
                         positionobjet->y = 0;
        }               
    return intervalle;
}
Uint32 bougerobjet1(Uint32 intervalle, void *parametre)

{
    SDL_Rect* positionobjet1 = parametre; 
    positionobjet1->y++;
     if(positionobjet1->y > 420)
        {
                         positionobjet1->y = 0;
        }               
    return intervalle;
}
Uint32 bougerobjet2(Uint32 intervalle, void *parametre)

{
    SDL_Rect* positionobjet2 = parametre; 
    positionobjet2->y++;
     if(positionobjet2->y > 450)
        {
                         positionobjet2->y = 0;
        }               
    return intervalle;
}
Uint32 bougerobjet3(Uint32 intervalle, void *parametre)

{
    SDL_Rect* positionobjet3 = parametre; 
    positionobjet3->y++;
     if(positionobjet3->y > 400)
        {
                         positionobjet3->y = 0;
        }               
    return intervalle;
}
Uint32 bougerobjet4(Uint32 intervalle, void *parametre)

{
    SDL_Rect* positionobjet4 = parametre; 
    positionobjet4->y++;
     if(positionobjet4->y > 390)
        {
                         positionobjet4->y = 0;
        }               
    return intervalle;
}
Uint32 bougerobjet5(Uint32 intervalle, void *parametre)

{
    SDL_Rect* positionobjet5 = parametre; 
    positionobjet5->y++;
     if(positionobjet5->y > 500)
        {
                         positionobjet5->y = 0;
        }               
    return intervalle;
}
Uint32 bougerobjet6(Uint32 intervalle, void *parametre)

{
    SDL_Rect* positionobjet6 = parametre; 
    positionobjet6->y++;
     if(positionobjet6->y > 400)
        {
                         positionobjet6->y = 0;
        }               
    return intervalle;
}
Uint32 bougerobjet7(Uint32 intervalle, void *parametre)

{
    SDL_Rect* positionobjet7 = parametre; 
    positionobjet7->y++;
     if(positionobjet7->y > 470)
        {
                         positionobjet7->y = 0;
        }               
    return intervalle;
}
Uint32 bougerobjet8(Uint32 intervalle, void *parametre)

{
    SDL_Rect* positionobjet8 = parametre; 
    positionobjet8->y++;
     if(positionobjet8->y > 440)
        {
                         positionobjet8->y = 0;
        }               
    return intervalle;
}
Uint32 bougerobjet9(Uint32 intervalle, void *parametre)

{
    SDL_Rect* positionobjet9 = parametre; 
    positionobjet9->y++;
     if(positionobjet9->y > 469)
        {
                         positionobjet9->y = 0;
        }               
    return intervalle;
}
Uint32 bougerobjet10(Uint32 intervalle, void *parametre)

{
    SDL_Rect* positionobjet10 = parametre; 
    positionobjet10->y++;
     if(positionobjet10->y > 423)
        {
                         positionobjet10->y = 0;
        }               
    return intervalle;
}
