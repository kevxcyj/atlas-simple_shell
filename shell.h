#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int intermode();
int nonintermode();
void tokenize();
void shell_command(char **args);
char* search_path(char *filename);


#endif
