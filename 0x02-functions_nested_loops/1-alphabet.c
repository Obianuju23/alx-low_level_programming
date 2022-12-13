#include "main.h"

/**
 * print alphabets - prints lowercase alphabets
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)

{
	char x = "a";


	while (x <= 'z')
	{
		_putchar(x);
		x++;

	}

	_putchar('\n');

}
