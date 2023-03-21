#include "main.h"
/**
 * times_table - Prints the 9 times table from 0
 * Return 0
 */
void times_table(void)
{
	int c, d, hk;

	for (c = 0; c <= 9; c++)
{
	_putchar (48);
	for (d = 1; d <= 9; d++)
{
	hk = c * d;
	_putchar(44);
	_putchar (32);
	if (hk <= 9)
{
	_putchar (32);
	_putchar (hk + 48);
}
	else
{
	_putchar ((hk / 10) + 48);
	_putchar ((hk % 10) + 48);
}
}
	_putchar ('\n');
}
}
