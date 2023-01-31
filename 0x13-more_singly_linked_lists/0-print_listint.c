#include "lists.h"

/**
*print_listint - prints all the elements of a list
*@h: the head of the linked list
*Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
	return (1);

	while (h != NULL)
	{
		if (h->next == NULL)
			printf("->next is NULL");
		else
			printf("%d\n", h->n);

		nodes++;
		h = h->next;
	}
	return (nodes);

}
