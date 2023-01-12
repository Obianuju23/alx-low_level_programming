#include <string.h>
#include"main.h"
#include <stdlib.h>

/**
*string_nconcat - function that concatenates two strings
*@s1: first sting to be concatenated
*@s2: the second string
*@n: the integer that holds the size of the data type
*Return: returns to a pointer to the newly allocated memory
*containing s1 and s2
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);

	m = malloc((strlen(s1) + n + 1) * sizeof(char));
	if (m == NULL)
	return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];
	for (j = 0; j < n; j++)
		m[i + j] = s2[j];
	m[i + j] = '\0';
	return (m);
}
