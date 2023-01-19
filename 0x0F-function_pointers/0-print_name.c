#include <stdio.h>
#include "function_pointers.h"

/**
*void print_name - a function that prints a name
*@name: The name to be printed
*@f: A pointer to the function
*Return: No return cause we've declared VOID as R_TYPE
*/

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)/*if any is NULL */
	return;
		f(name);
}
