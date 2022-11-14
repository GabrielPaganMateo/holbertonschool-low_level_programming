#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: pointer to head
 * @str: str data within node
 * Return: Address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup = strdup(str);
	list_t *NewNode = malloc(sizeof(list_t));
	list_t *LastNode = *head;

	if (NewNode == NULL || dup == NULL)
	{
		free(NewNode);
		return (NULL);
	}

	NewNode->str = dup;
	NewNode->len = strlen(dup);
	NewNode->next = NULL;

	if (*head == NULL)
	{
		*head = NewNode;
		return(NewNode);
	}

	while (LastNode->next != NULL)
	{
		LastNode = LastNode->next;
	}

	LastNode->next = NewNode;
	return (NewNode);
}
