#include "main.h"
#include <stdlib.h>

/**
 * create_array - create arrays of characters
 * @size: size of the array
 * @c: char to assign
 * Return: pointer of an array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	ch = malloc(sizeof(char) * size);
	if (size == 0 || ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);
}
