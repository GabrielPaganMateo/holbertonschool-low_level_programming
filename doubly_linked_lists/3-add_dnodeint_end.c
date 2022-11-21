#include "lists.h"
/**
 * add_dnodeint_end - Adds new node at end of doubly linked list
 * @head: pointer to head
 * @n: data of newnode
 * Return: Address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *NewNode = malloc(sizeof(dlistint_t));

	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = n;
	NewNode->next = NULL;

	if (*head == NULL)
	{
		NewNode->prev = NULL;
		*head = NewNode;
		return (NewNode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = NewNode;
	NewNode->prev = temp;

	return (NewNode);
}

