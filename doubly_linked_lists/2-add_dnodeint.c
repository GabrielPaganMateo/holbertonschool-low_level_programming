#include "lists.h"
/**
 * add_dnodeint - Add new node at beginning of doubly linked list
 * @head: pointer to head
 * @n: data of newnode
 * Return: address of newnode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NewNode = malloc(sizeof(dlistint_t));

	if (NewNode == NULL)
	{
		free(NewNode);
		return (NULL);
	}

	NewNode->n = n;
	NewNode->prev = NULL;
	NewNode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = NewNode;
	}
	*head = NewNode;
	return (NewNode);
}
