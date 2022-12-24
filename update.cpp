#include "engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
	/* TO DO LATER */

	dt = m_Clock.restart();

	dtAsSeconds = dt.asSeconds();
}
