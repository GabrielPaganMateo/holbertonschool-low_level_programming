#include "lists.h"
/**
 * free_listint2 - Function that frees a list
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}
	free(*head);
	*head = NULL;
}
