#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index of doubly linked list
 * @head: pointer to head
 * @index: node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1, *temp2, *temp;
	unsigned int i = 1, j = 0;

	temp = *head;
	temp1 = *head;
	temp2 = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		j++;
	}
	if (index > j)
	return (-1);
	while (i != index && temp1 != NULL)
	{
		temp1 = temp1->next;
		i++;
	}

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(temp2);
			return (1);
		}
		else
		{
			*head = (*head)->next;
			free(temp2);
			return(1);
		}
	}
	else
	{
		temp2 = temp1->next;
		temp1->next = temp2->next;
		temp1->prev = temp2->prev;
		free(temp);
		free(temp1);
		free(temp2);
		return (1);
	}
	return (1);
}
