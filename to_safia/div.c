#include "monty.h"

/**
 * f_div - divides the top two elements
 * @head: head if the stack
 * @counter: number of lines
 * Return: nothing
*/
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *head_stack;
	int len = 0, tmp;

	head_stack = *head;
	while (head_stack)
	{
		head_stack = head_stack->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_stack = *head;
	if (head_stack->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = head_stack->next->n / head_stack->n;
	head_stack->next->n = tmp;
	*head = head_stack->next;
	free(head_stack);
}
