#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
int printlist(dlistint_t *head);
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 99);
	insert_dnodeint_at_index(&head, 6, 100);
	insert_dnodeint_at_index(&head, 7, 101);
	print_dlistint(head);
	printlist(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}

int printlist(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
	}
	temp = temp->prev;
	
	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->prev;
	}
	return (0);
}
