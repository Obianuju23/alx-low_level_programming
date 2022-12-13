#include "main.h"

/**
 * main - print_alphabet_x10 - print alphabet a-z ten times
 *
 * Return: Always 0 (success)
 *
 */

void print_alphabet_x10(void)

{
	int y;
	char x;

	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar x;
		}

		_putchar('\n');
	}

}

