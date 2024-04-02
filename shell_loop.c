#include "shell.h"

/**
 * compile command
 * gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
 */

int main(__attribute__((unused)) int argc, char **envp)
{

    if (isatty(STDIN_FILENO))
    {
        intermode();
        exits();
        env(envp);
    }
    else
    {
        nonintermode();
    }

    return (0);

}
