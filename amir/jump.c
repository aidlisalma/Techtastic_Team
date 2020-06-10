SDL_Event event;
    
	while(SDL_PollEvent(&event))
	{ 
	switch (event.type)
	{        case SDL_KEYUP:
                {    if(event.key.keysym.sym==SDLK_SPACE && G->clavier==1)
                                 
                    {			
                                         G->p.Jump=0;
				       G->p.Ground=0; G->test_jump=0; G->jump_stop=0;
                     }

                     else if(event.key.keysym.sym==SDLK_SPACE && G->jump_stop==0 &&  G->clavier==1)
			{ 
				jump(G);
			}


void jump(Game *G)
{
if(G->p.Position.y<=100)
                               G->test_jump=1; 
				//saut
				G->p.Jump=1;
                                 G->p.Ground=1;
				if(G->p.Direction )
				{       if(G->test_jump==0 )
					G->p.Position.y-=15;
                                         else if (G->p.Position.y<=400) G->p.Position.y+=40;
					G->p.Position.x+=15;
                                        
					
				}
				else
				{      if(G->test_jump==0 )
					G->p.Position.y-=15;
                                        else if (G->p.Position.y<=400) G->p.Position.y+=40;
					 G->p.Position.x-=15;
                                        
				}
                                
				if(G->p.Position.y>=410)
                                   G->jump_stop=1;



}
