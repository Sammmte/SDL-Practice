#include "SDL.h"
#include <string>

struct Vector2
{
	int x;
	int y;
};

class Drawable
{
public:

	Drawable();
	Drawable(SDL_Renderer* _renderer, std::string texturePath);
	~Drawable();

	void SetImage(std::string path);

	void Render();

private:

	SDL_Rect rect;

	SDL_Texture* texture = nullptr;

	SDL_Renderer* renderer = nullptr;

	Vector2 position;

	Vector2 scale;

};