#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int NumOfNodes = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		NumOfNodes = NumOfNodes + 1;
	}
	return (NumOfNodes);
}


