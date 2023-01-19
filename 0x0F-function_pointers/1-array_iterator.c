#include <stdio.h>
#include "function_pointers.h"

/**
*array_iterator - function that executes a function given as a parameter
* on each element of an array
*@size: number of elements in the array
*@array: number of elements
*@action: a pointer to the function you need to use
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int j;

	if (action == NULL || array == NULL)
		return;
	for (j = 0; j < (int)size; j++)
		action(array[j]);
}
