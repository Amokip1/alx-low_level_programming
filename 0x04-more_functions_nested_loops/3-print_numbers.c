#include "main.h"
/**
 * print_numbers - prints new numbers 1-9
 * Return: 0-9 then new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	-putchar('\n');
}
