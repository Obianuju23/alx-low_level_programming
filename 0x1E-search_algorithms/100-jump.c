#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t prev_idx, jumper, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (prev_idx = jumper = 0; jumper < size && array[jumper] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jumper, array[jumper]);
		prev_idx = jumper;
		jumper += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",  prev_idx, jumper);

	jumper = jumper < size - 1 ? jumper : size - 1;
	for (;  prev_idx < jumper && array[prev_idx] < value;  prev_idx++)
		printf("Value checked array[%ld] = [%d]\n",  prev_idx, array[prev_idx]);
	printf("Value checked array[%ld] = [%d]\n", prev_idx, array[prev_idx]);

	return (array[prev_idx] == value ? (int)prev_idx : -1);
}
