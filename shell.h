#ifndef SHELL_H
#define SHELL_H

typedef struct info_s
{
	int status;
} info_t;

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <limits.h>


#define BUFFER_SIZE 1024

int exit_builtin(ino_t *my_info, char **args);
int add(int sum1, int sum2);
int _environ(info_t *my_info);

#endif
