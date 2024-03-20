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

    char *string;
    size_t size;

    string = NULL;
    size = 0;

    printf("%s", prompt);

    getline(&string, &size, stdin);

    printf("You entered: %s\n", string);

    free(string);

    return (0);
}