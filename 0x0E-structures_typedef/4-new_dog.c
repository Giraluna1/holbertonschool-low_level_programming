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
	int in, io, j;

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
	j = 0;
	if (p->owner)
	{
		for (j = 0; j < io; j++)
			p->owner[j] = owner[j];
		p->owner[j] = '\0';
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
