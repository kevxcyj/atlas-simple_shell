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
	token = NULL;
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
		toks[i] = token;
		printf("%s\n", toks[i]);
		token = strtok(NULL, " ");
		i++;
	}

	/*call built-in functions if correct command entered*/

	if (strcmp(command, "exit") == 0)
	{
		exits();
	}
	if (strcmp(command, "env") == 0)
	{
		env();
	}

	free (command);

    return (0);
}