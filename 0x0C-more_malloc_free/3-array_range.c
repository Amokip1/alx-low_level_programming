#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum int
 * @max: maximum int
 *
 * Return: return a pointer to newly created array
 * Malloc fails return NULL
 * NULL if min > max
 */
int *array_range(int min, int max)
{
	int *rs;
	int i;

	if (min > max)
	return (NULL);

	rs = malloc(sizeof(*rs) * ((max - min) + 1));

	if (rs == NULL)
	return (NULL);

	for (i = 0; min <= max; i++, min++)
	rs[i] = min;

	return (rs);
}
