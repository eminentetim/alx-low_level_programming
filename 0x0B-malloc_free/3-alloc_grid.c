#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2 dimensional array of integers, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **me;
	int i = 0;
	int k;

	me = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || me == NULL)
	{
		return (0);
	}

	while (i < height)
	{
		me[i] = malloc(sizeof(sizeof(int) * width));

		if (me[i] == NULL)
		{
			for (; i >= 0; i++)
				free(me[i]);

			free(me);
			return (NULL);
		}
		i++;
	}

	while (i < height)
	{
		for (k = 0; k < width; k++)
		me[i][k] = 0;
		i++;
	}
	return (me);
}
