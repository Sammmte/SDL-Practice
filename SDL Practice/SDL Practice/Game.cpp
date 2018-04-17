#include "Game.h"

Game::Game(const char* title, int x, int y, int width, int height)
{
	Init(title, x, y, width, height);

	//obj = new Drawable(renderer, "C:/Users/Santiago/Desktop/santi.png");
}

Game::~Game()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

void Game::Init(const char* title, int x, int y, int width, int height)
{
	SDL_Init(SDL_INIT_VIDEO);

	window = SDL_CreateWindow(title, x, y, width, height, SDL_WINDOW_OPENGL);

	if (window == NULL) 
	{
		quit = true;
	}

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
}

void Game::Loop()
{
	ReadEvents();
	//Render();
}

void Game::ReadEvents()
{
	while (!quit)
	{
		while (SDL_PollEvent(&event) != 0)
		{
			if (event.type == SDL_QUIT)
			{
				quit = true;
			}
			else
			{

			}
		}
	}
}

void Game::Render()
{
	SDL_RenderClear(renderer);

	obj->Render();

	SDL_RenderPresent(renderer);
}