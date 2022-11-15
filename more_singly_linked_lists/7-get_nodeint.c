#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to head
 * @index: index of the node, starts at 0
 * Return: nth node, if does not exist returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *NthNode;

	NthNode = head;

	while (NthNode != NULL)
	{
		if (count == index)
		{
			return (NthNode);
		}
		count++;
		NthNode = NthNode->next;
	}
	return (NULL);
}
