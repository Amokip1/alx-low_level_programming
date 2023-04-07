#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of the program
 * @argc: count argument
 * @argv: array argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0, num, a, b, c;

	for (a = 1; a < argc; a++)
	{
	for (b = 0; argv[a][b] != '\0'; b++)
	{
	if (argv[a][b] > '9' || argv[a][b] < '0')
	{
	printf("%s\n", "Error");
	return (1);
	}
	}
	}

	for (c = 1; c < argc; c++)
	{
	num = atoi(argv[c]);
	result += num;
	}
	printf("%d\n", result);
	return (0);
}
