#include "shell.h"

/**
 * compile command
 * gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
 */

int main(int argc, char **argv)
{
    if (isatty(STDIN_FILENO))
    {
        intermode();
    }
    else
    {
        nonintermode();
    }
}
