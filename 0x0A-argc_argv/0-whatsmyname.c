#include "main.h"

/**
 * main - print the name of the program
 * @argc: number of parameters
 * @argv: array of param
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
