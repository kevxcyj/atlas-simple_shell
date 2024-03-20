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

    char *string = NULL;
    size_t size = 0;
    size_t chars_read;

    printf("%s", prompt);

    chars_read = getline(&string, &size, stdin);
    printf("getline returned %ld\n", chars_read);

    if (chars_read < 0) {
        puts("couldn't read the input");
        free(string);
        return 1;
    }

    printf("<%s> is length %ld\n", string, strlen(string));

    free(string);

    return (0);
}