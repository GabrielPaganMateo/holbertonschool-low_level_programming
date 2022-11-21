#include "lists.h"
/**
 * dlistint_t add_dnodeint - Add new node at beginning of doubly linked list
 * @head: pointer to head
 * @n: data of newnode
 * Return: address of newnode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NewNode = malloc(sizeof(dlistint_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = n;
	NewNode->prev = NULL;
	NewNode->next = *head;

	*head = NewNode;
	return (NewNode);
}
