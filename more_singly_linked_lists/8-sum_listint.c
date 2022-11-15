#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) in a linked list
 * @head: pointer to head
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
