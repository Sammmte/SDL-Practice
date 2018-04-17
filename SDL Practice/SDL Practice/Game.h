#include "SDL.h"
#include "Drawable.h"

class Game
{

public:
	Game(const char* title, int x, int y, int width, int height);
	~Game();

	bool quit = false;

	void Loop();

private:

	void Init(const char* title, int x, int y, int width, int height);

	void ReadEvents();

	void Render();

	SDL_Window* window;

	SDL_Event event;
	
	SDL_Renderer* renderer;

	Drawable* obj;
};