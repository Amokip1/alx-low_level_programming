#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints str then \n
 * @separator: string to be printed btwn the strings.
 * @n: number of strings passed to the function.
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int j;
	char *str;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
	str = va_arg(list, char *);

	if (str)
	printf("%s", str);
	else
	printf("(nil)");

	if (j < n - 1)
	if (separator)
	printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
