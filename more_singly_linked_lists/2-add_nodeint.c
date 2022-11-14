#include "lists.h"
/**
 * add_nodeint - Add a new node at beginning of list
 * @head: pointer to head
 * @n: value of integer
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode = malloc(sizeof(listint_t));

	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = n;
	NewNode->next = *head;
	*head = NewNode;

	return (NewNode);
}
