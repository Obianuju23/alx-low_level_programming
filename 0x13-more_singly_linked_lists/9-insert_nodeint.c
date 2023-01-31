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
listint_t *temp = *head, *newNode;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (*head == NULL && idx != 0)
		return (NULL);
	temp = *head;
	if (idx != 0)
	{
		for (i = 0; temp != NULL && i < (idx - 1); i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}

/**
 * listint_len - gets the length of a linked list
 * @h: pointer to a struct listint
 * Return: returns the number of linked link
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
