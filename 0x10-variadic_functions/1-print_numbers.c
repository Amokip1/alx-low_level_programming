#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints num then \n
 * @separator: print str between numbers
 * @n: number of integers passed to the function.
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int j;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
	printf("%d", va_arg(list, int));
	if (separator && j < n - 1)
	printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
