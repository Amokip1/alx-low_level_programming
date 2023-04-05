#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: an int whose factorial to return
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
