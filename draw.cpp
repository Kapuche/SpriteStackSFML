#include "engine.h"

void Engine::draw()
{
	m_Window.clear();

	m_Window.setView(m_MainView);

	for(int i = 0; i < 16; i++)
	{
		m_Window.draw(m_Sprite[i]);
	}

	m_Window.display();
}
