#include "main.h"

/**
 * _memset -> this is mem function
 * @s: string
 * @b: char
 * @n: int
 * Return: a string
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;

	return (s);
}
