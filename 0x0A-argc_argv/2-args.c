#include <stdio.h>
#include "main.h"

/**
*main - prints all arguments it receives
*@argc: count of arguments
*@argv: array of arguments
*Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
{
	printf("%s\n", argv[count]);
}
	return (0);
}
