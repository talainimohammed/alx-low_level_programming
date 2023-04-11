#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer to a 2 dimensional
 * array of integers
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: return a pointer or null
 */
int **alloc_grid(int width, int height)
{
	int i, j, x, y;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p = (int **) malloc(height * sizeof(int *));
		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			p[i] = (int *) malloc(width * sizeof(int));
			if (!p[i])
			{
				for (j = 0; j <= i; j++)
					free(p[j]);
				free(p);
				return (NULL);
			}
		}
		for (x = 0; x < height; x++)
		{
			for (y = 0; y < width; y++)
			{
				p[x][y] = 0;
			}
		}
		return (p);
	}
}
