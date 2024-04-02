#include "shell.h"

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
