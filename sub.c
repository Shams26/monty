#include "monty.h"

/**
  * f_sub - subtracts the top element of the stack
  * from the second top element of the stack
  * @head: stack head
  * @counter: line_number
  * Return: nothing
 */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *sec;
	int sus, nodes;

	sec = *head;
	for (nodes = 0; sec != NULL; nodes++)
		sec = sec->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	sec = *head;
	sus = sec->next->n - sec->n;
	sec->next->n = sus;
	*head = sec->next;
	free(sec);
}
