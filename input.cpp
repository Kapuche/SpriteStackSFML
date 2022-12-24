#include "engine.h"

void Engine::input()
{
	Event event;
	while(m_Window.pollEvent(event))
	{
		if(event.type == Event::KeyPressed)
		{
			if(Keyboard::isKeyPressed(Keyboard::Escape))
			{
				m_Window.close();
			}
		}
	}
}
