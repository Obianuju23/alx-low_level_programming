#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_strings - function that prints strings
*@separator: pointer parameter
*@n: parameter
*Return: nil or ignore
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *s;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(valist, char *);
	if (s != NULL)
		printf("%s\n", "s");
	else if (s == NULL)
		printf("nil");

	if (i < n - 1)

		if (separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
