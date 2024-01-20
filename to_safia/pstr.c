#include "monty.h"

/**
 * f_pstr - prints the string from top, followed by a newline
 * @head: head of the stack
 * @counter: number of line
 * Return: nothing
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *head_stack;
	(void)counter;

	head_stack = *head;
	while (head_stack)
	{
		if (head_stack->n > 127 || head_stack->n <= 0)
		{
			break;
		}
		printf("%c", head_stack->n);
		head_stack = head_stack->next;
	}
	printf("\n");
}
