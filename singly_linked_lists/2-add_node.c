#include "lists.h"
/**
 * add_node - adds a new node at beginning of linked list
 * @head: pointer to header
 * @str: data member of node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup = strdup(str);
	list_t *NewNode = malloc(sizeof(list_t));
	
	if (NewNode == NULL || dup == NULL)
	{
		free(NewNode);
		return (NULL);
	}

	NewNode->str = dup;
	NewNode->len = strlen(dup);
	NewNode->next = *head;

	*head = NewNode;
	
	if (NewNode->next != NULL)
	{
		return (NewNode->next);
	}
	else
	{
		return (NULL);
	}
}
