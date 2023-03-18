#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit wheter greater than 5,  less than 6,  or 0.
 * Return: Always 0.
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putcher(n);
		n++;
	}
	putcher('\n');
	return (0);
}
