#include "main.h"
/**
 * _print_rev_recursion - print the string in a reverse
 * @s: str to print
 * Return: return 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		--s;
		_putchar(*s);
	}
}
