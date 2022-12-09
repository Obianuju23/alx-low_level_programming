#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets
 *
 * Reurn: Always 0 (success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
