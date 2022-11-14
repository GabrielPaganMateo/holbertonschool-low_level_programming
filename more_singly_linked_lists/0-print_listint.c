#include "lists.h"
/**
 *print_listint - prints all the elements of a listint_t
 *@h: pointer to header
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int NumOfNodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		NumOfNodes += 1;
	}
	return (NumOfNodes);
}


