#include "engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
	/* TO DO LATER */

	dt = m_Clock.restart();

	dtAsSeconds = dt.asSeconds();

	m_MainView.setCenter(m_Sprite[15].getPosition());

	m_Sprite[15].rotate(0.33);
	for(int i = 14; i >= 0; i--)
	{
		m_Sprite[i].setRotation(m_Sprite[15].getRotation());
	}
}
