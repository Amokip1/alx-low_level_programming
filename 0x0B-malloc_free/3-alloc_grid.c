#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to 2 dimentional array int
 * @width: width of an array
 * @height: height of an array
 * Return: a pointer of array of int
 */

int **alloc_grid(int width, int height)
{
	int **get;
	int x, y;

	if (width <= 0 || height <= 0)
	return (NULL)
	get = malloc(sizeof(int *) * height);

	if (get == NULL)
	return (NULL);

	for (x = 0; x < height; x++)
	{
	get[x] = malloc(sizeof(int) * width);

	if (get[x] == NULL)
	{
	for (; x >= 0; x--)
	free(get[x]);

	free(get);
	return (NULL);
	}
	}
	for (x = 0; x < height; x++)
	{
	for (y = 0; y < width; y++)
	get[x][y] = 0;
	}
	return (get);
}
