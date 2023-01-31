#include "lists.h"

/**
*listint_len - returns the length of elements in a linked list
*@h: pointer to struct listint
*Return: the number of elements in the linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
