#ifndef GAME_H
#define GAME_H
#include "Debug.h"
#include <SDL.h>
#include <SDL_image.h>
#include <vector>
#include <Fsm.h>


class Game
{
public:
	Game();
	~Game();

	FSM* fsm = new FSM();

	bool Initialize(const char*, int, int, int, int, int);
	void LoadContent();
	void UnloadContent();
	void Render();
	void Update();
	void HandleEvents();
	bool IsRunning();
	void CleanUp();


private:
	bool m_running;
	SDL_Window* m_p_Window;
	SDL_Renderer* m_p_Renderer;
	SDL_Texture* m_p_Texture;
	SDL_Rect m_Source;
	SDL_Rect m_Destination;
	SDL_Surface* m_p_Surface;





	SDL_Rect CurrentAnimation;




};
#endif

