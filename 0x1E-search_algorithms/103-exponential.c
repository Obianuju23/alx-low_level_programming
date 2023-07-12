#include "search_algos.h"

/**
 *_binary_search - A function that searches for a value in a sorted
 *array of integers using the Binary search algorithm
 *@array: The array of intergers to be searched
 *@size: The number of elements in array
 *@value: The value to search for
 *Return: The first index where value is located
 */

int _binary_search(int *array, size_t size, int max, int value)
{
	int min, i, mid;
	
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
			if (i != min)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
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

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, max;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	max = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, max);
	return (_binary_search(array, i / 2, max, value));
}
