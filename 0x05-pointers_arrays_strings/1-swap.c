#include "main.h"
/**
 * swap_int - swaps the values of 2 int
 * @a: first integer.
 * @b: 2nd integer.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int z = *a;
	*a = *b;
	*b = z;
}
