#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of double linked list
 * @head: pointer to head of list
 * @index: nth node to be returned
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int NodeCount = 0;
	unsigned int nthNode = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		NodeCount++;
	}

	if (index > NodeCount)
	{
		return (NULL);
	}

	temp = head;

	while (nthNode < index)
	{
		temp = temp->next;
		nthNode++;
	}

	return (temp);
}

