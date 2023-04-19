#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: no. of elments in array
 * @cmp: pointer to the function
 * to compare values.
 *
 * Return: index of the first element
 * -1. If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array && cmp)
	{
	if (size <= 0)
	return (-1);

	for (y = 0; y < size; y++)
	if (cmp(array[y]))
	return (y);
	}

	return (-1);
}
