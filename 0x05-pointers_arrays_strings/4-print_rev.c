#include "main.h"

/**
*print_rev - function that prints a string, in reverse, followed by a new line
*@s: string
*Return: Always 0 (success)
*/

void print_rev(char *s)

{
int i = 0;

	while (s[i] != '\0')
	{
		_putchar(i++);
	}
		_putchar('\n');
}
