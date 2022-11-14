#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: pointer to head
 * @n: integer value
 * Return: Address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode = malloc(sizeof(listint_t));

	listint_t *lastNode = *head;

	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = n;
	NewNode->next = NULL;

	if (*head == NULL)
	{
		*head = NewNode;
		return (NewNode);
	}

	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}

	lastNode->next = NewNode;

	return (NewNode);
}
