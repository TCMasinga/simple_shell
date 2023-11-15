#include "shell.h"

/*
 * main - function for the entry point of shell program
 * It initialises shell
 * Enters a loop to prompt for commands
 * then finally execute commands
 * Return: 0 always on success
 */

int main(void)
{
	char command[200];

	while (1)
	{
		_prompt();
		reading_command(command, sizeof(command));
		_execute(command);
	}

	return (0);
}
