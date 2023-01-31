#include "lists.h"

/**
*sum_listint - sums the data of a linked list
*@head: pointer to the first node
*Return: returns sum of data or zero if the list is empty
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
