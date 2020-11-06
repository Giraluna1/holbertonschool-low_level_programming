#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creat new info
 * @name: of dog
 * @age: pointer of age
 * @owner: pointer owner
 * Return: p or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = NULL;
	int in, io, j, j1;

	p = malloc(sizeof(dog_t));

	if (!p)
		return (NULL);
	for (in = 0; name[in] < '\0'; in++)
	{
		;
	}
	for (io = 0; owner[io] < '\0'; io++)
	{
		;
	}
	p->age = age;
	p->name = malloc((in + 1) * sizeof(char));
	if (p->name)
	{
		for (j = 0; j < in; j++)
			p->name[j] = name[j];
		p->name[j] = '\0';
	}
	else
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc((io +  1) * sizeof(char));
	if (p->owner)
	{
		for (j1 = 0; j1 < io; j1++)
			p->owner[j1] = owner[j1];
		p->owner[j1] = '\0';
	}
	else
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	return (p);
}
