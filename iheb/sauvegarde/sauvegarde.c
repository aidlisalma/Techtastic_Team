#include "game.h"

void sauvegarder(Game *G)
{

    FILE* fichier = NULL;
    
 
    fichier = fopen("sauvegarde.txt", "w+");
 
    if (fichier != NULL)
    { 
        fprintf(fichier,"%d\t" "%d\t"  "%d\t" "%d\t" "%d\t" "%d\t" "%d\t" "%d" ,G->v.vie,G->pos_real.x,G->pos_real.y,G->p.Position.x,G->kill,G->kill2,G->kill3,G->v.score);
    }
        fclose(fichier);
   
}
