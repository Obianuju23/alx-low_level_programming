#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initialises the struct var type dog
 *@name: dog name
 *@age: dog age
 *@owner: owner of the dog
 *@d: pointer to struct type dog
 *Return: Always 0(success)
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{

	if (d->age == 0)
		printf("Age: %f\n", 0.0);
	else
		printf("Age is: %f\n", d->age);

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->owner == NULL)
		printf("owner is: (nil)\n");
	else
		printf("owner is: %s\n", d->owner);
	
	}
}
