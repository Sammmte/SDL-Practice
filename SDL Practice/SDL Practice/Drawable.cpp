#include "Drawable.h"

Drawable::Drawable()
{
	
}

Drawable::Drawable(SDL_Renderer* _renderer, std::string texturePath) : Drawable::Drawable()
{
	//renderer = _renderer;

	//SetImage(texturePath);
}

Drawable::~Drawable()
{
	//SDL_DestroyTexture(texture);
}

void Drawable::Render()
{
	/*if (texture != nullptr && renderer != nullptr)
	{
		SDL_Rect renderQuad;

		renderQuad.x = position.x;
		renderQuad.y = position.y;
		renderQuad.w = scale.x;
		renderQuad.h = scale.y;

		SDL_RenderCopy(renderer, texture, &rect, &rect);
	}*/
}

void Drawable::SetImage(std::string path)
{
	/*SDL_Surface* surface = IMG_Load(path.c_str());

	if (surface == nullptr && renderer == nullptr)
	{
		return;
	}
	else
	{
		texture = SDL_CreateTextureFromSurface(renderer, surface);

		SDL_FreeSurface(surface);
	}*/
}