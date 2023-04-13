#include "main.h"
#include <stdlib.>
/**
 * _calloc - allocates mem of an array using malloc
 * @nmemb: no. of elements in array
 * @size: size of elements of array
 *
 * Return: Null size or nmemb 0
 * pointer to mem allocated if success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;
	unsigned int b;

	if (nmemb == 0 || size == 0)
	return (NULL);

	k = malloc(nmemb * size);

	if (k == NULL)
	return (NULL);

	for (b = 0; b < (nmemb * size); b++)
	k[b] = 0;

	return (k);
}
