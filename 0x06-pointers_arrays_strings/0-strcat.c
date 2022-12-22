#include "main.h"

/**
*_strcat - concatenates one string into another
*@dest: first string
*@src: second string to be concatenated into the first string
*Return: pointer to designated string
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{	
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
{
	dest[i] = src[j];
}

	dest[i] = '\0';
	return (dest);
}
