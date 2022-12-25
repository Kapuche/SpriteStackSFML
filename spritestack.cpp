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
		slice[i].setTexture(m_Texture); // We'll first try by implementing an array of sprite instead of creating a new sprite. It be easier, but less efficient in term of memory usage and performance. To research
		slice[i].setTextureRect(sf::IntRect(0, yAxis, sliceWidth, sliceHeight)); // Here, part of the magic operate : we're slicing the .png file and get each sprite to have a slice. Now the rest of the magic is to offset the vertical position of each sprites of the array.
		yAxis += sliceHeight;

		// Now the magic trick to offset the position. We'll try this
		slice[i].setPosition(slice[i].getPosition().x, (slice[i].getPosition().y - i));
	}
}
