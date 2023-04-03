#include "main.h"

/**
 * _strchr - locate char in str
 * @s: source string
 * @c: character to be found
 *
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
	i++;

	}

	for (j = 0; j <= i; j++)
	{
	if (c == s[j])
	{

	s += j;
	return (s);

	}

	}

	return ('\0');

}
