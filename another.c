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
  /*  while (token != NULL)
    {
	    toks[i] = token;
	    i++;
	    token = strtok(NULL, " ");
    }


    free(command);

    return (0);
}
*/

char **split_strings(char *string)
{
    int size = 50;
    int i = 0;
    char **tokens = malloc(size * sizeof(char *));
    char *token;

    if (!tokens)
    {
        printf(stderr, "ERROR\n");
        exit(EXIT_FAILURE);
    }
    token = strtok (*string, TOK_DELIM);
    while (token != NULL)
    {
        if (token[0] == ' ')
    {
        break;
    }
    tokens[i] = token;
    i++;
    if (i >= size)
    {
        size += size;
        tokens = realloc(tokens, size * sizeof(char*));
        if (!tokens)
        {
            printf(stderr, "ERROR");
            exit(EXIT_FAILURE);
        }
    }
    token = strtok(NULL, DELIM);
    }
    tokens[i] = NULL;
    return (tokens);

}


