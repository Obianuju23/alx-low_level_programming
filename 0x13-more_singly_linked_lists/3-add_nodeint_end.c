#include "lists.h"

/**
*add_nodeint_end - function that adds a new node at the end of list
*@head: A pointer to the first node
*@n: An integer  data to insert in the new node created
*Return: returns the address of the new node or null if it fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == 0)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
