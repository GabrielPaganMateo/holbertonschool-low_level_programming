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
	unsigned int i;
	listint_t *temp, *temp2;
	listint_t *NewNode = malloc(sizeof(listint_t));

	NewNode->n = n;
	temp = *head;
	temp2 = *head;

	if (idx == 0)
	{
		NewNode->next = *head;
		return (NewNode);
	}

	while (i != (idx - 1) || temp != NULL)
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

