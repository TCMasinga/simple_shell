#include "shell.h"
#include <string.h>
#include <stdlib.h>

/*
 * reading_command - function that recieves user input
 */

void reading_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			main_print("\n");
			exit(EXIT_SUCCESS);
		}

		else
		{
			main_print("Error encounter.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}

