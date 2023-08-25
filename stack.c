#include "monty.h"

/**
 * f_stack - sets the format of the data to a stack (LIFO)
 * This is the default behavior of the program
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/

void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
