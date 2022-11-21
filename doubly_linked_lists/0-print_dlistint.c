#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a list
 * @h: pointer to head of doubly linked list
 * Return: number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	int NodeCount = 0;

	temp = h;

	while (temp->next != NULL)
	{
		printf("%i", n);
		temp = temp->next;
		NodeCount++;
	}
	return (NodeCount);
}
