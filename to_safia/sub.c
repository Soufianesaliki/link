#include "monty.h"

/**
  *f_sub - subtration of the elements
  *@head: head of the stack
  *@counter: number of line
  *Return: nothing
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int sub, nodes;

	tmp = *head;
	for (nodes = 0; tmp != NULL; nodes++)
		tmp = tmp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	sub = tmp->next->n - tmp->n;
	tmp->next->n = sub;
	*head = tmp->next;
	free(tmp);
}
