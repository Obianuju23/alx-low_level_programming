#include "main.h"

/**
*swap_int - swaps the values of two integers
*@a:  first integer to be swapped
*@b: the second integer
*int c: equal to the first swapped value
*Return: Always 0 (success)
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
