#include "monty.h"
/**
 * f_swap - swaps the top two elements of the stack
 * @head: stack head
 * @counter: line num
 * Return: nothing
*/
void f_swap(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	sec = h->n;
	h->n = h->next->n;
	h->next->n = sec;
}
