#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at given position
 * @head: pointer to head
 * @idx: index of the list where new node should be added
 * @n: data of node
 * Return: address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, j = 0;
	listint_t *temp, *temp2, *temp3;
	listint_t *NewNode = malloc(sizeof(listint_t));

	temp = *head;
	temp2 = *head;
	temp3 = *head;

	while (temp3 != NULL)
	{
		temp3 = temp3->next;
		j++;
	}
	if (idx > j)
	{
		return (NULL);
	}

	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = n;

	if (idx == 0)
	{
		NewNode->next = *head;
		*head = NewNode;
		return (NewNode);
	}

	while (i != (idx - 1) && temp != NULL)
	{
		temp = temp->next;
		temp2 = temp2->next;
		i++;
	}
	temp = temp->next;

	if (i == (idx - 1))
	{
		NewNode->next = temp;
		temp2->next = NewNode;
		return (NewNode);
	}
	else
	{
		return (NULL);
	}
}
