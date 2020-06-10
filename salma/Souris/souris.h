#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

float lerp(float a,float b, float t)
{
	return a + t * (b - a);
}//interpolation linéaire

