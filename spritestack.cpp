#include "engine.h"

/*** CREATED BY GEIGER ALEXIS ***
 *** devcomm 1 : the number of slice, the width and the height of the slice ***
 *** must be declared manually for now ***/
/*** devcomm 2 : 2 for loops implemented, one for texturing and setting the position of the spritestack, the second to get the rotation. ***
 *** use of a sprite array. Might not be the best. Research to be made. ***
 *** Ready to test. ***/
/*** devcomm 3 : added a third for loop for the position and the spritestacking ***/
/*** devcomm 4 : yeeted the third "for loop", the rotation is better placed in the update function ***/

void Engine::spritestack(Sprite (&slice)[])
{
	m_Texture.loadFromFile("Graphics/Hunter.png"); // Here to use graphics in your depository 
	int sliceNumber = 15; // Manually putting the number of slices
	int topSlice = sliceNumber - 1; // Useful for the rotation
	int sliceWidth = 16; // This will help to set just a square of the spritesheet
	int sliceHeight = 16; // This too

	int yAxis = 0; // can be replaced by xAxis if the spritesheet is in the horizontal position. 

	for(int i = 0; i < sliceNumber; i++)
	{
		slice[i].setTexture(m_Texture); // We'll first try by implementing an array of sprite instead of creating a new sprite. It be easier, but less efficient in term of memory usage and performance. To research
		slice[i].setTextureRect(sf::IntRect(0, yAxis, sliceWidth, sliceHeight)); // Here, part of the magic operate : we're slicing the .png file and get each sprite to have a slice. Now the rest of the magic is to offset the vertical position of each sprites of the array.
		yAxis += sliceHeight;
		// This is the mistake in the position.
		// slice[i].setPosition(slice[i].getPosition().x, (slice[i].getPosition().y - i));
		slice[i].setOrigin(8,8);
	}

	for(int h = 14, i = 0; h >= 0; h--, i++)
	{
		slice[h].setPosition(slice[topSlice].getPosition().x, (slice[topSlice].getPosition().y + i));
	}
}
