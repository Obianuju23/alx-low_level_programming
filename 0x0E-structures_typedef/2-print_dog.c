#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - function that prints information on dog and owner
 * @d: pointer to struct type dog
 * Return: Always 0(success)
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("Age: %f\n", 0.0);
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
	}
}
