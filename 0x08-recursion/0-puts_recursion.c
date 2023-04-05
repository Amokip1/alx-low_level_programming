#include "main.h"
/**
 * _puts_recursion - fucntion prints a str
 * @s: string to print
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}
	else
	_putchar('\n');
}
