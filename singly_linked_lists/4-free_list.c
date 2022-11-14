#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: pointer to head of list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
