#include "shell.h"

/**
 * compile command
 * gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
 */

int main()
{
		if (isatty(STDIN_FILENO))
		{
			while (1)
			{
				intermode();
			}
		}

	return (0);
}
