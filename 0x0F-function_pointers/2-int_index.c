#include <stdio.h>
#include "function_pointers.h"

/**
* int_index -  function that searches for an integer
*@array: parameter elements
*@size: the number of elements in the array
*@cmp: pointer to the function to be used to compare values
*Return: 0 or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (-1);
	for (t = 0; t <= size; t++)
	{
		if (cmp(array[t]) != 0)
		{
			return (t);
		}
	}
	return (-1);
}
