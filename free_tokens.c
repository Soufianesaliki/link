#include "main.h"

/**
 * free_tokens - frees an allocated list of strings
 * @args : array of strings
 * Return: void
 */

void free_tokens(char **args)
{
	int i;

	for (i = 0; args[i] != NULL; i++)
	{
		free(args[i]);
	}
	free(args);
}
