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
	dlistint_t *NewNode;
	unsigned int NodeCount = 0;
	unsigned int i = 0;

	if (h == NULL)
	{
		return (NULL);
	}

	temp1 = *h;
	temp2 = *h;
	temp3 = *h;

	while (temp1 != NULL)
	{
		temp1 = temp1->next;
		NodeCount++;
	}

		if (idx > NodeCount)
		{
			return (NULL);
		}

	NewNode = malloc(sizeof(dlistint_t));

	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = n;

	if (idx == 0)
	{
		NewNode->next = *h;
		NewNode->prev = NULL;
		*h = NewNode;
		return (NewNode);
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
	if (idx != NodeCount)
	{
		temp3->prev = NewNode;
	}
	return (NewNode);
}
