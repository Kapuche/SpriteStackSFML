#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>

using namespace sf;

class Engine
{
private:
	Clock m_Clock;
	Time dt;
	float dtAsSeconds;

	Texture m_Texture;
	Sprite m_Sprite[16];

	View m_MainView;
	Vector2f m_Resolution;

	RenderWindow m_Window;

	void draw();
	void input();
	void update(float dtAsSeconds);

public:
	Engine();
	void run();
	void spritestack(Sprite (&slice)[]);
};

#endif
