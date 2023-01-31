#include "lists.h"

/**
 * print_listint - prints the int of a linked list
 * @h: pointer to a struct listint
 * Return: returns the number of linked link
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (1);

	while (h != NULL)
	{
	
		if (h->n == 0)
		{
			printf("%d", 0);
		}		
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		nodes++;
	}

	return (nodes);
}
