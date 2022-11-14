#include "lists.h"
/**
 * list_len - gives number of elements in a linked list
 * @h: pointer to head of list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int NumOfNodes = 0;

	while (h != NULL)
	{
		NumOfNodes = NumOfNodes + 1;
		h = h->next;
	}
	return (NumOfNodes);
}
