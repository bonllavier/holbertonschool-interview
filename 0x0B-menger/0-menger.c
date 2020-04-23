#include "menger.h"
/**
 * menger - menger sponge
 * @level: Level of menger sponge
 * Return: nothing
 */
void menger(int level)
{
	int size = 0;
	int index = 0;
	int index2 = 0;
	int axisx = 0;
	int axisy = 0;
	char charac;

	size = pow(3, level);

	while (index < size)
	{
		for (index2 = 0 ; index2 < size;)
		{
			charac = '#';
			axisx = index;
			axisy = index2++;
			while (axisy > 0 || axisx > 0)
			{
				if (axisy % 3 == 1 && axisx % 3 == 1)
				{
					charac = ' ';
				}
				axisx /= 3;
				axisy /= 3;
			}
			printf("%c", charac);
		}
		printf("\n");
		index++;
	}

}
