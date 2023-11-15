#include "shell.h"
#include <unistd.h>

void main_print(const char *result)
{
	write(STDOUT_FILENO, result, strlen(result));
}
