#include "main.h"

/**
*rev_string - function that reverses a string
*@s: string pointer
*Return: Always 0 (success)
*/

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int var;

	while (s[count] != '\0')
{
		count++;
}

	for (var = 0; var < count; var++)
{		count--;
		rev = s[var];
		s[var] = s[count];
		s[count] = rev;
}
}
