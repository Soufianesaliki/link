#include "monty.h"

/**
 * addnode - add node to the begining of the stack
 * @head: head of the stack
 * @n: integer value
 * Return: nothing
*/
void addnode(stack_t **head, int n)
{
	stack_t *newNode, *tmp;

	tmp = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (tmp)
		tmp->prev = newNode;
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
}
