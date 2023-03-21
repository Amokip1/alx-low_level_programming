#include "main.h"
/**
 * Isalpha - checks 1 if the input is a
 * alphabetical character
 * @c: it is in ASCII code
 *
 * Return: 1 for letters 0 for if not
 */
int _isalpha(int c)
{
		if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
		{
			return (1);
		}
		else
		{
			return (0);
		}
		_putchar('\n');
}

