#include "monty.h"

/**
 * f_add - adds the top two elements
 * @head: stack head
 * @counter: numberof lines
 * Return: Nothing
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *head_stack;
	int len = 0, tmp;

	head_stack = *head;
	while (head_stack)
	{
		head_stack = head_stach->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_stack = *head;
	tmp = head_stach->n + head_stach->next->n;
	head_stach->next->n = tmp;
	*head = head_stach->next;
	free(head_stack);
}
