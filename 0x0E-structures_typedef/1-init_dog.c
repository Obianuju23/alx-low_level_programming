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

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{

	d->name = name;
	d->age = age;
	d->owner = owner;

	}
}
