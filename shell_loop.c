#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * compile command
 * gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
 */

int main()
{
    char prompt[] = "shell$ ";

    char *command;
    size_t size;
    char *token;

    command = NULL;
    size = 0;

/* print the prompt */
    printf("%s", prompt);

/* read user input into the string variable */
    getline(&command, &size, stdin);

    printf("You entered: %s\n", command);


    token = strtok(command, " ");

    while (token != NULL)
    {

    }


    free(command);

    return (0);
}