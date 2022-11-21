#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: pointer to header
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int NodeCount = 0;

	while (h != NULL)
	{
		NodeCount++;
		h = h->next;
	}
return (NodeCount);
}
