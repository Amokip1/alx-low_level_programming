#include "main.h"
#include <stdlib.>
/**
 * _calloc - allocates mem of an array 
 * @nmemb: no. of elements in array
 * @size: size of elements of array
 *
 * Return: Null size or nmemb 0
 * pointer to mem allocated if success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < (nmemb * size); j++)
	{
		*((char *)(p) + j) = 0;
	}
	return (p);
}
