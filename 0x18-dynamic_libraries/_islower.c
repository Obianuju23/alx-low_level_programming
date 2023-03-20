#include "main.h"

/**
 * _islower - is a function that checks for lowercase character
 * @c: is the char value to be compared with lower case alphabet
 * Return: returns 1 if successful or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
