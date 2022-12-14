#include "lists.h"
/**
 * pop_listint - Deletes the head node of a linked list
 * @head: head node
 * Return: head nodes data, n
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *node;

	if (*head == NULL)
	{
		return (0);
	}

	node = *head;
	data = node->n;

	*head = (*head)->next;

	free(node);

	return (data);
}
