#include "main.h"
#include <stdlib.h>
/**
 * str_concat - joins ends of 2 strings
 * @s1: input 1 to concat
 * @s2: input 2 to concat
 * Return: pointer of array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *chr;
	unsigned int a, b, c, limit;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
	;

	for (b = 0; s2[b] != '\0'; b++)
	;

	chr = malloc(sizeof(char) * (a + b + 1));

	if (chr == NULL)
	{
	free(chr);
	return (NULL);
	}

	for (c = 0; c < a; c++)
	chr[c] = s1[c];

	limit = b;
	for (b = 0; b <= limit; c++, b++)
	chr[c] = s2[b];

	return (chr);
}
