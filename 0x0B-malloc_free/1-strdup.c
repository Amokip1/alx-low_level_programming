#include "main.h"
#include <stdlib.h>
/**
 * _strdup - dup a pointer to a new mem space
 * @str: a string
 * Return: pointer of an array of chars
 *
 */

char *_strdup(char *str)
{
	char *cr;
	unsigned int a, b;

	if (str == NULL)
	return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	cr = (char *)malloc(sizeof(char) * (a + 1));

	if (cr == NULL)
	return (NULL);

	for (b = 0; b <= a; b++)
	cr[b] = str[b];

	return (cr);
}
