#include "monty.h"

/**
 * f_mod - computes the rest of the division of the seocond
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/

void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int sec, len;

	len = 0;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	sec = h->next->n % h->n;
	h->next->n = sec;
	*head = h->next;
	free(h);
}
