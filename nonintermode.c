#include "shell.h"
/**
* nonintermode - Funtion to fun the non interactive mode 
*
* Return - 0
*/
int nonintermode()
{
    char *command;
    size_t size;
	char *toks[100];
	
    command = NULL;
    size = 0;

/* read user input into the string variable */
    getline(&command, &size, stdin);
    command = strtok(command, "\n");

/* convert string into tokens and store them in an array */
	tokenize(toks, command);

    shell_command(toks);

/* free allocated memory */
	free (command);

    return (0);
}