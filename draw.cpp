#include "engine.h"

void Engine::draw()
{
	m_Window.clear();

	m_Window.setView(m_MainView);

	m_Window.display();
}
