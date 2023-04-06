#include <stdio.h>

/**
 * main - prints arguments it receives
 * @argc: number of param
 * @argv: array of param
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
	printf("%s\n", argv[j]);
	}
	return (0);
}
