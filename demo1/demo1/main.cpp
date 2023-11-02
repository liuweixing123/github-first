#include<stdio.h>
#include<SDL.h>
#include<Stdlib.h>
int main(int argc,char * argv[])
{	
	SDL_Init(SDL_INIT_VIDEO);

	SDL_CreateWindow("demo1", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
	
	printf("hello world");

	
	while (1);
	return 0;
}