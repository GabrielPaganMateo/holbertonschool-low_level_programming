#include "lists.h"
/**
 * pop_listint - Deletes the head node of a linked list
 * @head: head node
 * Return: head nodes data, n
 */
int pop_listint(listint_t **head);
{
	int data;

	if (*head == NULL)
	{
		return (-1);
	}

	listint_t *node = *head;
	data = head->n;

	*head = (*head)->next;

	free(head);

	return (data);
}
