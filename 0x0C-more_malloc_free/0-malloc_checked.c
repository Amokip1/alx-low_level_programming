#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates mem
 * @b: no of bytes t allocate
 *
 * Return: returns pointer to the allocated mem
 */
void *malloc_checked(unsigned int b)
{
	char *pr;

	pr = malloc(b);
	if (pr == NULL)
	exit(98);
	return (pr);
}
