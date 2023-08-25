#include "monty.h"

/**
  *f_rotl- rotates stack to top
  *@head: stack head
  *@counter: line_number
  *Return: nothing
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
stack_t *tmp = *head, *sec;

if (*head == NULL || (*head)->next == NULL)
{
	return;
}
sec = (*head)->next;
sec->prev = NULL;
while (tmp->next != NULL)
{
	tmp = tmp->next;
}
tmp->next = *head;
(*head)->next = NULL;
(*head)->prev = tmp;
(*head) = sec;
}
