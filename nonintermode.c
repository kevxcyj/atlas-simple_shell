#include "shell.h"

int nonintermode()
{
    char *command;
    size_t size;
	char *toks[100];
	
    command = NULL;
    size = 0;

/* read user input into the string variable */
    getline(&command, &size, stdin);
    command[strcspn(command, "\n")] = 0;

/* convert string into tokens and store them in an array */
	tokenize(toks, command);
    toks[1] = NULL;

    shell_command(toks);

/* free allocated memory */
	free (command);

    return (0);
}