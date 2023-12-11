#include "main.h"

/**
 * exec_cmd - exeucts list of command and argument
 * @cmd : array of constant strings
 * @env : array of constant strings
 * Return: void
 */

void exec_cmd(char *const cmd[], char *const env[])
{
	int status;
	pid_t child;

	child = fork();
	if (child == -1)
	{
		perror("fork Error\n");
		return;
	}
	if (child == 0)
	{
		if (execve(cmd[0], cmd, env) == -1)
		{
			perror("execution Error\n");
			return;
		}
	}
	else
		wait(&status);
}
