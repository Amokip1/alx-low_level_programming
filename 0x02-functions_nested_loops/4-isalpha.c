#include "main.h"
/**
 * _isalpha - checks for alphabetical letters
 * @c: a charter to be checked
 * Return: returns 1 if letter or 0 if not
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

