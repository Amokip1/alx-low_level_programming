#include "main.h"
/**
* is_prime_number - find out if a number is prime no.
* @n: input number to test
* Return: 1 if n is a prime number or 0 if not
*/
int is_prime_number(int n)
{
	int _is_prime = 0;

	if (n < 2)
	_is_prime = 0;
	else if (n == 2)
	_is_prime = 1;
	else if (n % 2 == 1)
	_is_prime = 1;

	return (_is_prime);
}
