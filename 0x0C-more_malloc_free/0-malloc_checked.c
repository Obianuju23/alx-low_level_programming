#include "main.h"
#include <stdlib.h>

/**
*malloc_checked - function that allocates memory using malloc
*@b: integer parameter that holds memory size
*Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
void *a;
	
	a = malloc(b);
	
	if (a == 0)
	{	
		exit(98);
	}
	return (a);
}
