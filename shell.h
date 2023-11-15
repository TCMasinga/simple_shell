#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <limits.h>


#define BUFFER_SIZE 1024

int add(int sum1, int sum2);
int main(void);
void _prompt(void);
void main_print(const char * );
void reading_command(char *command, size_t size);
void _execute(const char *command);

#endif
