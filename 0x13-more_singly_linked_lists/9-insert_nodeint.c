#include "lists.h"
/**
 * insert_nodeint_at_index - This function inserts a
 * new node at given position
 * @head: The head node
 * @idx: The index of the list where new node is to be added
 * @n: The integer data of the new node
 * Return: The address of the new inserted node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	newNode = (listint_t *) malloc(sizeof(listint_t));
	if (newNode != NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!*head && !idx)
	{
		*head = newNode;
		return (newNode);
	}

	else if (!*head && idx)
		return (NULL);

	else if (!idx)
	{
		newNode->next = temp;
		*head = newNode;
		return (newNode);
	}

	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
