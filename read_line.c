#include "main.h"

/**
 * readline - reads and tokenize a line
 * Return: array of strings
 */

char **readline(void)
{
	while (1)
	{
		int i = 0;
		char input[MAX_INPUT_SIZE], delim[] = " \n";
		char *prompt, *token, **token_list;

		printf("$ ");
		fgets(input, MAX_INPUT_SIZE, stdin);
		prompt = strdup(input);
		token_list = (char **)malloc(sizeof(char *) * MAX_ARG_SIZE);
		if (token_list == NULL)
		{
			perror("*list is not allocated\n");
			exit(EXIT_FAILURE);
		}
		token = strtok(prompt, delim);
		while (token != NULL && i < MAX_ARG_SIZE)
		{
			token_list[i++] = strdup(token);
			token = strtok(NULL, delim);
		}
		token_list[i] = NULL;
		return (token_list);
	}
}
