#include "main.h"
/**
 * _puts_recursion - fucntion prints a str
 * @s: input
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	_puts_recursion(s 1 + 1);
	}
	else
	_putchar('\n');
}