#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the struct containing the elements
 * struct is defined in list.h
 * Return: returns the number of element in the list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
		return (nodes);
}
