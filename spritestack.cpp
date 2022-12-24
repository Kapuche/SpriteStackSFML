#include "engine.h"

/*** CREATED BY GEIGER ALEXIS ***
 *** devcomm 1 : the number of slice, the width and the height of the slice ***
 *** must be declared manually for now ***/

void Engine::spritestack(Sprite (&slice)[])
{
	m_Texture.loadFromFile("Graphics/Hunter.png"); // Here to use graphics in your depository 
	int sliceNumber = 16; // Manually putting the number of slices
	int sliceWidth = 16; // This will help to set just a square of the spritesheet
	int sliceHeight = 16; // This too

	int yAxis = 0; // can be replaced by xAxis if the spritesheet is in the horizontal position. 

/* Sprite array
 * For loop with each sprite part being a slice
 * TO DO : the position of said sprite stack */

	for(int i = 0; i < sliceNumber; i++)
	{
		slice[i].setTexture(m_Texture);
		slice[i].setTextureRect(sf::IntRect(0, yAxis, sliceWidth, sliceHeight));
		yAxis += sliceHeight;
	}
}
