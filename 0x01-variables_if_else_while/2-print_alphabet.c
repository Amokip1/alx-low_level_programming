#include <stdio.h>
/**
 * main - prints the alphabet.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10); /* this is an ascii code for new line*/

	return (0);
}
