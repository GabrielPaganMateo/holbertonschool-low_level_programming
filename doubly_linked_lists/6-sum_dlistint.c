#include "lists.h"
/**
 * sum_dlistint - sums all the data of a doubly linked list
 * @head: pointer to head
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
