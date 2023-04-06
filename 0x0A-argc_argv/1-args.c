#include <stdio.h>

/**
 * main - print number of arguments passed to the prog
 * @argc: number of param
 * @argv: array of param
 *
 * Return: Always 0
 */

int main(int argc, char *argv[]  __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
