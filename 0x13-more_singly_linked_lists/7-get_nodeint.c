#include "lists.h"

/**
*get_nodeint_at_index - returns the nth node of a listint_t linked list
*@head: pointer to the first node
*@index: position of the node
*Return: the index pointer or NULL if the node does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && temp != NULL; i++)
		temp = temp->next;

	return (temp);
}
