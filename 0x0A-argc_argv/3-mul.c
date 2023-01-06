#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if it works, 1 if there is an ERROR
 */
int main(int argc, char **argv)
{
	int n, m, product;

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	 /*_atio: converts a character string to an integer value*/
	n = atoi(argv[1]);
	m = atoi(argv[2]);
	product = n * m;

	printf("%i\n", product);
/*%i is a format specifier specifies the type as integer*/

	return (0);
}
