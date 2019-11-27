#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <GL/glew.h>
#include <SDL_opengl.h>
#include <stdio.h>
#include <string>


class GameLoop {
public:
	GameLoop();
	virtual ~GameLoop();
	bool init();
	bool handleInput();
	void update();
	void draw();
	void clean();

private:
	SDL_Window * window;
	SDL_GLContext context;
};