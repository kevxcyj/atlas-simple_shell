#include "shell.h"

int intermode()
{
    char prompt[] = "shell$ ";

    char *command;
    size_t size;
	int i;
	char *token;
	char *toks[100];
	
    command = NULL;
    size = 0;
	i = 0;

/* print the prompt */
    printf("%s", prompt);

/* read user input into the string variable */
    getline(&command, &size, stdin);

    printf("You entered: %s\n", command);

/* convert string into tokens and store them in an array */

	token = strtok(command, " ");

	while (token != NULL)
	{
		toks[i++] = token;
		token = strtok(NULL, " ");
	}

	for (i = 0; i < 100; ++i) 
        printf("%s\n", toks[i]);

    return (0);
}