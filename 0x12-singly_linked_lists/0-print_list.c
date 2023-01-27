#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the struct containing the elements
 * struct is defined in list.h
 * Return: returns the number of element in the list
 *
 * Description - if NULL is passed to the print list function,
 * nothing is returned, else, the while loop prints the data in the node
 * provided its pointer part is not null.
 * it repeats loop until h meets the node that ends
 * the linked list with pointer part being null
 */
size_t print_list(const list_t *h)

{
	size_t nodes = 0;

	if (h == 0)
		return (0);
	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0], (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
