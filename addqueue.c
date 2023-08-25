#include "monty.h"

/**
 * addqueue - adds node at stack's tail
 * @n: new_value
 * @head: head of the stack
 * Return: nothing
*/

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *sec;

	sec = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}

	new_node->n = n;
	new_node->next = NULL;

	if (sec)
	{
		while (sec->next)
			sec = sec->next;
	}
	if (!sec)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		sec->next = new_node;
		new_node->prev = sec;
	}
}
