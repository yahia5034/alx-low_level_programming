#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (height < 1 || width < 1)
		return (NULL);	
	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
			return (NULL);

	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	return (p);
}
