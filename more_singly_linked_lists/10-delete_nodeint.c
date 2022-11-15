#include "lists.h"
/**
 * delete_nodeint_at_index - deletes noe at index of linked list
 * @head: pointer to head
 * @index: indicates node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *temp, *temp2;

	temp = *head;
	temp2 = *head;

	if (head == NULL || *head == NULL)
	return (-1);

	while (i != index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (index > i)
	return (-1);

	if (index == 0)
	{
		*head = temp2->next;
		free(temp2);
		return (1);
	}
	else
	{
		temp2 = temp->next;
		temp->next = temp2->next;
		free(temp2);
		return (1);
	}
	return (-1);
}
