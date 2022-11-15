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
	tmp->next = *head;
	tmp2->next = *head;

	if (idx == 0)
	{
		NewNode->next = *head;
		return (NewNode);
	}

	while (i != (idx - 1) || tmp != NULL)
	{
		tmp = tmp->next;
		temp2 = temp2->next;
		i++;
	}
	temp = temp->next;

	if (i == (idx - 1))
	{
		NewNode->next = tmp;
		tmp2->next = NewNode;
		return (NewNode);
	}
	else
	{
		return (NULL);
	}
}

