#include "monty.h"

/**
 * f_pop - prints only the top
 * @head: head of the stack
 * @counter: number of line
 * Return: nothing
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *head_stack;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_stack = *head;
	*head = head_stack->next;
	free(head_stack);
}
