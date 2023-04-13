#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatinates 1 str to another
 * @s1: 1st str to append to
 * @s2: str to concatenate from
 * @n: no of bytes from s2
 * Return: pointer to the resulting str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sn;
	unsigned int sn1, sn2, snut, i;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (sn1 = 0; s1[sn1] != '\0'; sn1++)
	;

	for (sn2 = 0; s2[sn2] != '\0'; sn2++)
	;

	if (n > sn2)
	n = sn2;

	snut = sn1 + n;

	snut = malloc(snut + 1);

	if (snut == NULL)
	return (NULL);

	for (i = 0; i < snut; i++)
	if (i < sn1)
	snut[i] = s1[i];
	else
	snut[i] = s2[i - sn1];

	snut[i] = '\0';

	return (snut);
}
