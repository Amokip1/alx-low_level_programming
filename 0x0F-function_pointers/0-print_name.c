#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: str to add
 * @f: function pointer.
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
