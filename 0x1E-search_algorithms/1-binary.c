#include "search_algos.h"

/**
 *binary_search - A function that searches for a value in a sorted
 *array of integers using the Binary search algorithm
 *@array: The array of intergers to be searched
 *@size: The number of elements in array
 *@value: The value to search for
 *Return: The first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int num = 0; int min, i, max, mid;

	min = 0;
	
	max = size - 1;

	if (array == NULL)
	{
	return (-1);
	}

	while (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			printf("%d ", array[i]);
			if (num != max)
			printf(", ");
		}
		printf("\n");	

		mid = (min + max) / 2;

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
