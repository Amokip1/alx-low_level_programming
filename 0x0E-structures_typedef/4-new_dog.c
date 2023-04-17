#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int a = 0, b = 0, c;
	dog_t *dogy;

	while (name[a] != '\0')
	a++;
	while (owner[b] != '\0')
	b++;
	dogy = malloc(sizeof(dog_t));
	if (dogy == NULL)
	{
	free(dogy);
	return (NULL);
	}
	dogy->name = malloc(a * sizeof(dogy->name));
	if (dogy->name == NULL)
	{
	free(dogy->name);
	free(dogy);
	return (NULL);
	}
	for (c = 0; c <= a; c++)
	dogy->name[c] = name[c];
	dogy->age = age;
	dogy->owner = malloc(b * sizeof(dogy->owner));
	if (dogy->owner == NULL)
	{
	free(dogy->owner);
	free(dogy->name);
	free(dogy);
	return (NULL);
	}
	for (c = 0; c <= b; c++)
	dogy->owner[c] = owner[c];
	return (dogy);
}
