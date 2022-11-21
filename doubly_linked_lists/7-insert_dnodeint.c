#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: pointer to head
 * @idx: index
 * @n: data
 * Return: address of newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1, *temp2, *temp3;
	dlistint_t *NewNode = malloc(sizeof(dlistint_t));
	unsigned int NodeCount = 0;
	unsigned int i = 0;

	temp1 = *h;
	temp2 = *h;
	temp3 = *h;

	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = n;

	if (idx == 0)
	{
		NewNode->next = *h;
		*h = NewNode;
		return (NewNode);
	}

	while (temp1 != NULL)
	{
		NodeCount++;
		temp1 = temp1->next;
	}

	if (idx > NodeCount)
	{
		return (NULL);
	}

	while (i < (idx - 1) && temp2 != NULL)
	{
		temp2 = temp2->next;
		temp3 = temp3->next;
		i++;
	}
	temp3 = temp3->next;

	NewNode->prev = temp2;
	NewNode->next = temp3;
	temp2->next = NewNode;
	temp3->prev = NewNode;
	return (NewNode);
}
