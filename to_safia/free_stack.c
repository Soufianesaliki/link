#include "monty.h"

/**
* free_stack - frees a stack or queue
* @head: head of the stack
* Return: Nothing
*/
void free_stack(stack_t *head)
{
	stack_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
