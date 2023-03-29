#include "main.h"
/**
 * string_toupper - change lower to uppercase.
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int count = 0;

	while (*(n + count) != '\0')
	{
	if ((*(n + count) >= 97) && (*(n + count) <= 122))
	*(n + count) = *(n + count) - 32;
	count++;
	}

	return (n);
}
