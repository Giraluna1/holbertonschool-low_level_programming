#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print info
 * @d: info full
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}

