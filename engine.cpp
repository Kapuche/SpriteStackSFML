#include "engine.h"

Engine::Engine()
{
	m_Resolution.x = VideoMode::getDesktopMode().width;
	m_Resolution.y = VideoMode::getDesktopMode().height;

	m_Window.create(VideoMode(m_Resolution.x, m_Resolution.y), "SpriteStack");
	m_MainView.setSize(Vector2f((m_Resolution.x / 7), (m_Resolution.y /7)));
	m_Window.setFramerateLimit(120);
}

void Engine::run()
{
	while(m_Window.isOpen())
	{
		input();
		update(dtAsSeconds);
		draw();
	}
}
