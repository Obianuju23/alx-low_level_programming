#include <stdio.h>
#include "main.h"

/**
*_strcat - concatenates one string into another
*@dest: first string
*@src: second string to be concatenated into the first string
*Return: pointer to designated string
*/

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{	
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
{
	dest[length] = src[j];
}

	dest[length] = '\0';
	return (dest);
}
