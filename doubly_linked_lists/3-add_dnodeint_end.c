#include "lists.h"
/**
 * add_dnodeint_end - Adds new node at end of doubly linked list
 * @head: pointer to head
 * @n: data of newnode
 * Return: Address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *NewNode = malloc(sizeof(dlistint_t));

	if (NewNode == NULL)
	{
		return (NULL);
	}

	temp = *head;
	
	while (temp != NULL)
	{
		temp = temp->next;
	}

	NewNode->prev = temp;
	NewNode->next = NULL;
	temp->next = NewNode;

	return (NewNode);
}

