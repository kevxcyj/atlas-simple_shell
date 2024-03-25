#include "shell.h"

void intermode()
{
    char prompt[] = "shell$ ";

    char *command;
    size_t size;
    char *token;
    char **toks;
    int i;

    command = NULL;
    size = 0;

/* print the prompt */
    printf("%s", prompt);

/* read user input into the string variable */
    getline(&command, &size, stdin);

    printf("You entered: %s\n", command);


    token = strtok(command, " ");

    toks = malloc(size * sizeof(char*));

/* convert string into tokens and store them in an array */
    while (token != NULL)
    {
	    toks[i] = token;
	    i++;
	    token = strtok(NULL, " ");
    }


    free(command);

    return (0);
}