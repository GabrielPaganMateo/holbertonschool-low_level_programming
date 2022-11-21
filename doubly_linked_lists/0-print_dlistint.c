#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a list
 * @h: pointer to head of doubly linked list
 * Return: number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	int NodeCount = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		NodeCount++;
	}
return (NodeCount);
}
