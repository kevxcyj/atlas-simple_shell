#include "shell.h"

int intermode()
{
    char prompt[] = "shell$ ";

    char *command;
    size_t size;
	
    command = NULL;
    size = 0;

/* print the prompt */
    printf("%s", prompt);

/* read user input into the string variable */
    getline(&command, &size, stdin);

    printf("You entered: %s\n", command);

/* convert string into tokens and store them in an array */

    return (0);
}