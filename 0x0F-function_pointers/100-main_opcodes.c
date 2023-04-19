#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints upcodes
 * @argc: parameter count
 * @argv: parameter vector.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int k, nbytes;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

	for (k = 0; k < nbytes; k++)
	{
	printf("%02x", opc[k] & 0xFF);
	if (k != nbytes - 1)
	printf(" ");
	}

	printf("\n");
	return (0);
}
