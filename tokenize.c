#include "shell.h"

/**
 * tokenize- tokenizes the input string into an array
 * @array: array for the tokens to be stored
 * @command: input string of commands to be tokenized
*/
void tokenize(char *array[], char *command)
{
    char *token;
    int i;

    token = strtok(command, " ");
    i = 0;

	while (token != NULL)
	{
		array[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	array[i] = NULL;

}
