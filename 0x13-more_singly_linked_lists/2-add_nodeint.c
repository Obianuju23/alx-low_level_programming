#include "lists.h"

/**
*add_nodeint - adds a new node at the beginning of a list
*@head: A pointer to the first node
*@n: An integer  data to insert in the new node created
*Return: returns the address of the new node or null if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
