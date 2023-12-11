#include "main.h"

/**
 * main - simple shell program
 * @argc : void
 * @argv : void
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	char *const env[] = {NULL};
	char **list;

	(void)argv;
	(void)argc;
	while (1)
	{
		list = readline();
		if (strcmp(list[0], "exit") == 0)
			break;
		else if (strcmp(list[0], "cd") == 0)
		{
			if (chdir(list[1]) == 0)
			{
				printf("changed to %s\n", list[1]);
				continue;
			}
			else
			{
				perror("cd error\n");
				return (1);
			}
		}
		else
			exec_cmd(list, env);
	}
	free_tokens(list);
	return (0);
}
