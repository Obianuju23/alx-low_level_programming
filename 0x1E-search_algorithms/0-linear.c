#include "search_algos.h"

/**
 *linear search: Afunction that searches for a value in an array 
 *of integers using the Linear search algorithm
 *@array: The array of intergers to be searched
 *@size: The number of elements in array
 *@value: The value to search for
 *Return: The first index where value is located
 */


int linear_search(int *array, size_t size, int value) {

    if (!array || array == NULL) {
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("Comparing checked value [%d] = [%d]\n", value, array[i];
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}








int linear_search(int *array, size_t size, int value) {
 
    unsigned int i;

    if (!arry || array == NULL) 
    {
        return -1;
    }

    for (i = 0; i < size; i++) 
    {
            printf("Value checked array[%d] = [%d]\n", i, array[i]);
            if (array[i] == value) 
            {
                    return i;
            }
    }

    return -1;
}
