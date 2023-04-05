#include "main.h"
/**
 * _pow_recursion - returns the value of x to power y
 * @x: base
 * @y: raising number
 * Return: power of a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
