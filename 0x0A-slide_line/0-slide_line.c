#include "slide_line.h"

/**
 * slide_line - 2048 game
 * @line: elements to be ordered
 * @size: size of the input
 * @direction: left or right alination
 * Return: 1 or 0
 */

int slide_line(int *line, size_t size, int direction)
{
	size_t inpos = 0, inposf = 1, conf = 0, counter = 0, counter2, aux1;

	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
		return (0);
	if (direction == SLIDE_RIGHT)
	{inposf = size - 2;
		inpos = size - 1; }
	while (counter < size)
	{       aux1 = inposf;
		conf = 0;
		counter2 = counter + 1;
		while (counter2 < size)
		{
			if (line[inposf] == line[inpos] && line[inpos] != 0)
			{line[inpos] = line[inpos] * 2;
				line[inposf] = 0;
				break; }
			if (line[inposf] != 0 && line[inpos] == 0)
			{line[inpos] = line[inposf];
				line[inposf] = 0;
				conf = 1;
				inposf = aux1;
				counter--;
				break; }
			if (line[inposf] != 0)
				break;
			direction == SLIDE_RIGHT ? inposf-- : inposf++;
			counter2++;
		}
		if (line[inpos] == 0)
			break;
		if (conf == 0 && direction == SLIDE_LEFT)
		{inpos++;
			inposf = inpos + 1; }
		if (conf == 0 && direction == SLIDE_RIGHT)
		{inpos--;
			inposf = inpos - 1; }
		counter++;
		}
	return (1);
}
