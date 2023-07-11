#include "search_algos.h"

/**
*binary_search -  function that searches for a value in a sorted array of
*integers using the Binary search algorithm
*@array: The first element of the array to search in
*@size: The number of elements in array
*@value: The value to search for
*Return: The index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	if (!array || array == NULL)
	{
		return (-1);
	}
	int min = 0;
	int max = size - 1;

	while (min <= max)
	{
	int mid = (min + max) / 2;

	printf("mid of array: ");

	for (i = min; i <= max; i++)
	{
	printf("%d ", array[i]);
	}
	printf("\n");

	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
	{
		min = mid + 1;
	}
	else
	{
		max = mid - 1;
	}
	}

		return (-1);
}
