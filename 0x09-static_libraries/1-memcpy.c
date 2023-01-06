#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @n: bytes of the memory area to be filled
* @src: is a pointer to the memory area to be copied from
* @dest: memory area to be copied into
* Return:  @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{

	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		dest[i] = src[i];
	}

	return (dest);
}
