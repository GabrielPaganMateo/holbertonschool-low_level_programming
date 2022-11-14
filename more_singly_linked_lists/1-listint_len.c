#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to header
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	int NumOfNodes = 0;

	while (h != NULL)
	{
		NumOfNodes += 1;
		h = h->next;
	}
	return (NumOfNodes);
}
