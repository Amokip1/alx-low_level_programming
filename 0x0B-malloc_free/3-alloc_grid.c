#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to 2 dime array
 * @width: width input
 * @height: height input
 * Return: a pointer of an array of int
 */

int **alloc_grid(int width, int height)
{
	int **grt;
	int a, b;

	if (width < 1 || height < 1)
	return (NULL);

	grt = malloc(height * sizeof(int *));
	if (grt == NULL)
	{
	free(grt);
	return (NULL);
	}

	for (a = 0; a < height; a++)
	{
	grt[a] = malloc(width * sizeof(int));
	if (grt[a] == NULL)
	{
	for (a--; a >= 0; a--)
	free(grt[a]);
	free(grt);
	return (NULL);
	}
	}

	for (a = 0; a < height; a++)
	for (b = 0; b < width; b++)
	grt[a][b] = 0;

	return (grt);
}
