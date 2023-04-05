#include "main.h"
/**
 * _strlen_recursion - print string's length
 * @s: string length
 * Return: return string's length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
